/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 15:28:09 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/23 04:40:04 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

int main()
{
	{
		try {
			std::cout << YELLOW << "\nTest #001 - Span[0]" << WHITE << std::endl;
			Span sp = Span(0);
			std::cout << BLUE << "Span[0] = {}" << WHITE << std::endl;
			std::cout << GREEN << "Shortest = " << sp.shortestSpan() << WHITE << std::endl;
			std::cout << GREEN << "Longest  = " << sp.longestSpan() << WHITE << std::endl;
		} catch (std::exception &e) {
			std::cout << MAGENTA << e.what() << WHITE << std::endl;
		}
	}

	{
		try {
			std::cout << YELLOW << "\nTest #002 - Span[1]" << WHITE << std::endl;
			Span sp = Span(1);
			sp.addNumber(1);
			std::cout << BLUE << "Span[1] = {1}" << WHITE << std::endl;
			std::cout << GREEN << "Shortest = " << sp.shortestSpan() << WHITE << std::endl;
			std::cout << GREEN << "Longest  = " << sp.longestSpan() << WHITE << std::endl;
		} catch (std::exception &e) {
			std::cout << MAGENTA << e.what() << WHITE << std::endl;
		}
	}

	{
		try {
			std::cout << YELLOW << "\nTest #003 - Span[1] try to add 2 numbers" << WHITE << std::endl;
			Span sp = Span(1);
			sp.addNumber(1);
			sp.addNumber(1);
			std::cout << BLUE << "Span[1] = {1, 1}" << WHITE << std::endl;
			std::cout << GREEN << "Shortest = " << sp.shortestSpan() << WHITE << std::endl;
			std::cout << GREEN << "Longest  = " << sp.longestSpan() << WHITE << std::endl;
		} catch (std::exception &e) {
			std::cout << MAGENTA << e.what() << WHITE << std::endl;
		}
	}

	{
		try {
			std::cout << YELLOW << "\nTest #004 - Span[2]" << WHITE << std::endl;
			Span sp = Span(2);
			sp.addNumber(1);
			sp.addNumber(2);
			std::cout << BLUE << "Span[2] = {1, 2}" << WHITE << std::endl;
			std::cout << GREEN << "Shortest = " << sp.shortestSpan() << WHITE << std::endl;
			std::cout << GREEN << "Longest  = " << sp.longestSpan() << WHITE << std::endl;
		} catch (std::exception &e) {
			std::cout << MAGENTA << e.what() << WHITE << std::endl;
		}
	}

	{
		try {
			std::cout << YELLOW << "\nTest #005 - Span[2]" << WHITE << std::endl;
			Span sp = Span(2);
			sp.addNumber(1);
			sp.addNumber(1);
			std::cout << BLUE << "Span[2] = {1, 1}" << WHITE << std::endl;
			std::cout << GREEN << "Shortest = " << sp.shortestSpan() << WHITE << std::endl;
			std::cout << GREEN << "Longest  = " << sp.longestSpan() << WHITE << std::endl;
		} catch (std::exception &e) {
			std::cout << MAGENTA << e.what() << WHITE << std::endl;
		}
	}

	{
		try {
			std::cout << YELLOW << "\nTest #006 - Span[10]" << WHITE << std::endl;
			Span sp = Span(10);
			sp.addNumber(1);
			sp.addNumber(2);
			sp.addNumber(3);
			sp.addNumber(4);
			sp.addNumber(5);
			sp.addNumber(6);
			sp.addNumber(7);
			sp.addNumber(8);
			sp.addNumber(9);
			sp.addNumber(10);
			std::cout << BLUE << "Span[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}" << WHITE << std::endl;
			std::cout << GREEN << "Shortest = " << sp.shortestSpan() << WHITE << std::endl;
			std::cout << GREEN << "Longest  = " << sp.longestSpan() << WHITE << std::endl;
		} catch (std::exception &e) {
			std::cout << MAGENTA << e.what() << WHITE << std::endl;
		}
	}

	{
		try {
			std::cout << YELLOW << "\nTest #007 - Add multiples numbers (10)" << WHITE << std::endl;
			Span sp = Span(10);
			std::vector<int> vec;
			for (unsigned int i = 1; i <= 10; i++)
				vec.push_back(i);
			sp.addNumbers(vec.begin(), vec.end());
			std::cout << BLUE << "Span[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}" << WHITE << std::endl;
			std::cout << GREEN << "Shortest = " << sp.shortestSpan() << WHITE << std::endl;
			std::cout << GREEN << "Longest  = " << sp.longestSpan() << WHITE << std::endl;
		} catch (std::exception &e) {
			std::cout << MAGENTA << e.what() << WHITE << std::endl;
		}
	}

	{
		try {
			std::cout << YELLOW << "\nTest #008 - Add multiples numbers (100)" << WHITE << std::endl;
			Span sp = Span(100);
			std::vector<int> vec;
			for (unsigned int i = 1; i <= 100; i++)
				vec.push_back(i);
			sp.addNumbers(vec.begin(), vec.end());
			std::cout << BLUE << "Span[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, ..., 100}" << WHITE << std::endl;
			std::cout << GREEN << "Shortest = " << sp.shortestSpan() << WHITE << std::endl;
			std::cout << GREEN << "Longest  = " << sp.longestSpan() << WHITE << std::endl;
		} catch (std::exception &e) {
			std::cout << MAGENTA << e.what() << WHITE << std::endl;
		}
	}

	{
		try {
			std::cout << YELLOW << "\nTest #009 - Subject Test" << WHITE << std::endl;
			Span sp = Span(5);
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			std::cout << BLUE << "Span[5] = {6, 3, 17, 9, 11}" << WHITE << std::endl;
			std::cout << GREEN << "Shortest = " << sp.shortestSpan() << WHITE << std::endl;
			std::cout << GREEN << "Longest  = " << sp.longestSpan() << WHITE << std::endl;
		} catch (std::exception &e) {
			std::cout << MAGENTA << e.what() << WHITE << std::endl;
		}
	}

	return (0);
}