/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 15:28:12 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/23 04:35:36 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

//---------------   Constructors & Destructors   ---------------//

Span::Span() : _max(0) {}

Span::Span(unsigned int max) : _max(max) {}

Span::~Span() {}

Span::Span(const Span &cpy) { *this = cpy; }

Span	&Span::operator=(const Span &cpy)
{
	_max = cpy._max;
	_vec = cpy._vec;
	return (*this);
}


//---------------   Functions   ---------------//

void	Span::addNumber(unsigned int n)
{
	if (_vec.size() == _max)
		throw SpanIsFull();
	_vec.push_back(n);
}

void	Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (std::distance(begin, end) > int(_max - _vec.size()))
		throw SpanIsFull();
	_vec.insert(_vec.end(), begin, end);
}

unsigned int	Span::shortestSpan()
{
	if (_vec.size() <= 1)
		throw NotEnoughNumbers();

	std::vector<int> sorted_vec = _vec;
	std::sort(sorted_vec.begin(), sorted_vec.end());

	int shortest = sorted_vec[1] -  sorted_vec[0];

	for (unsigned int i = 2; i < _vec.size(); i++)
		shortest = ((sorted_vec[i] - sorted_vec[i - 1]) < shortest) ? sorted_vec[i] -  sorted_vec[i - 1] : shortest;

	return (shortest);
}

unsigned int	Span::longestSpan()
{
	if (_vec.size() <= 1)
		throw NotEnoughNumbers();
	
	int min = (_vec[0] <= _vec[1]) ? _vec[0] : _vec[1];
	int max = (_vec[0] <= _vec[1]) ? _vec[1] : _vec[0];

	for (unsigned int i = 2; i < _vec.size(); i++)
	{
			min = (_vec[i] < min) ? _vec[i] : min;
			max = (_vec[i] > max) ? _vec[i] : max;
	}

	return (max - min);
}