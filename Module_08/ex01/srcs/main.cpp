/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 03:39:41 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/21 04:00:16 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

int main()
{
	try {
		Span span(1010);

		for (int i = 0; i < 1000; i++)
			span.addNumber(i);

		std::cout << "data in span : ";
		std::vector<int> data = span.getData();
		for (std::vector<int>::iterator it = data.begin(); it != data.end(); it++)
			std::cout << *it << " ";
		std::cout << std::endl;

		std::cout << "shortest : " << span.shortestSpan() << std::endl;
		std::cout << "longest : " << span.longestSpan() << std::endl;

		std::vector<int> v;
		for (int i = 0; i < 10; ++i)
			v.push_back(i);
		
		span.addNumber(v.begin(), v.end()); 
		data = span.getData();
		for (std::vector<int>::iterator it = data.begin(); it != data.end(); it++)
			std::cout << *it << " ";
		std::cout << std::endl;

		span.addNumber(42); 
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	return (0);
}