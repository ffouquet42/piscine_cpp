/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 15:28:09 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/24 02:58:17 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RPN.hpp"

//---------------   Constructors & Destructors   ---------------//

RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN(const RPN &cpy) { _stack = cpy._stack; }

RPN	&RPN::operator=(const RPN &cpy) {
	if (this != &cpy) {
		_stack = cpy._stack;
	}
	return (*this);
}


//---------------   Functions   ---------------//

bool	RPN::_is_valid_char(char c)
{
	return ((c == ' ') || (c == '+' || c == '-' || c == '/' || c == '*') || (c >= '0' && c <= '9'));
}

bool	RPN::_is_operator(char c)
{
	return (c == '+' || c == '-' || c == '/' || c == '*');
}

void	RPN::_stack_operation(char sign)
{
	int	n1, n2;

	if (_stack.size() < 2)
		throw std::invalid_argument("Error");
	
	n1 = _stack.top();
	_stack.pop();
	n2 = _stack.top();
	_stack.pop();
	
	if (sign == '/' && n1 == 0)
		throw std::invalid_argument("Error: Division by 0");
	
	switch (sign) {
		case '+':
			_stack.push(n2 + n1);
			break;
		case '-':
			_stack.push(n2 - n1);
			break;
		case '/':
			_stack.push(n2 / n1);
			break;
		case '*':
			_stack.push(n2 * n1);
			break;
	}
}

void	RPN::calcul(const std::string &input)
{
	
	if (input.empty())
		throw std::invalid_argument("Error: string is empty");

	for (int i = 0; input[i]; i++)
	{
		if (!_is_valid_char(input[i]))
			throw std::invalid_argument("Error: Invalid character");
	}

	for (int i = 0; input[i]; i++)
	{
		if (input[i] == ' ')
			continue;
		else if (_is_operator(input[i]))
			_stack_operation(input[i]);
		else
			_stack.push(input[i] - 48);
	}

	if (_stack.size() != 1)
		throw std::invalid_argument("Error");
	std::cout << _stack.top() << std::endl;
}