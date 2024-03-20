/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 00:27:14 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/20 13:23:21 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Array.hpp"

int main(void) 
{
	{
		std::cout << YELLOW << "\nTest #001 - Array(5) <int>" << WHITE << std::endl;
		Array<int> arr(5);
		try {
			for (int i = 0; i < 5; i++)
				std::cout << GREEN << arr[i] << WHITE << std::endl;
		} catch (std::exception &e) {
			std::cout << MAGENTA << e.what() << WHITE << std::endl;
		}
	}

	{
		std::cout << YELLOW << "\nTest #002 - Array() <int>" << WHITE << std::endl;
		std::cout << BLUE << "Empty Array created" << WHITE << std::endl;
		Array<int> arr;
		std::cout << YELLOW << "Test #003 - Try to acces value of empty array" << WHITE << std::endl;
		try {
			for (int i = 0; i < 5; i++)
				std::cout << GREEN << arr[i] << WHITE << std::endl;
		} catch (std::exception &e) {
			std::cout << MAGENTA << e.what() << WHITE << std::endl;
		}
	}

	{
		std::cout << YELLOW << "\nTest #004 - Array(20) <int>" << WHITE << std::endl;
		Array<int> arr(20);
		try {
			for (int i = 0; i < 20; i++)
				std::cout << GREEN << arr[i] << WHITE << std::endl;
		} catch (std::exception &e) {
			std::cout << MAGENTA << e.what() << WHITE << std::endl;
		}
	}

	{
		std::cout << YELLOW << "\nTest #005 - Array(5) <int> | Try to display unexisting arr[i]" << WHITE << std::endl;
		Array<int> arr(5);
		try {
			for (int i = 0; i < 10; i++)
				std::cout << GREEN << arr[i] << WHITE << std::endl;
		} catch (std::exception &e) {
			std::cout << MAGENTA << e.what() << WHITE << std::endl;
		}
	}

	{
		std::cout << YELLOW << "\nTest #006 - Array(5) <char>" << WHITE << std::endl;
		Array<char> arr(5);
		try {
			for (int i = 0; i < 5; i++)
				std::cout << GREEN << "\"" << arr[i] << "\"" << WHITE << std::endl;
		} catch (std::exception &e) {
			std::cout << MAGENTA << e.what() << WHITE << std::endl;
		}
	}

	{
		std::cout << YELLOW << "\nTest #007 - Array(17) <char>" << WHITE << std::endl;
		Array<char> arr(17);
		try {
			for (int i = 0; i < 17; i++)
				std::cout << GREEN << "\"" << arr[i] << "\"" << WHITE << std::endl;
		} catch (std::exception &e) {
			std::cout << MAGENTA << e.what() << WHITE << std::endl;
		}
	}

	{
		std::cout << YELLOW << "\nTest #008 - Subject Tests" << WHITE << std::endl;
		int *a = new int();
		std::cout << CYAN << a << WHITE << std::endl << std::endl;
		delete a;
	}
	
	return (0);
}