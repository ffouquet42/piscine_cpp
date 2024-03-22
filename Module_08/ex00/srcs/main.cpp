/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 12:32:04 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/23 00:27:22 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/easyfind.hpp"

int	main()
{
	std::cout << YELLOW << "\nTest #001 - Create vector<int>" << WHITE << std::endl;
	std::cout << BLUE << "vector<int> = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 17, 5, 10, 17]" << WHITE << std::endl;
	
	std::vector<int> vec;
	for (int i = 0; i <= 10; i++)
		vec.push_back(i);
	vec.push_back(17);
	vec.push_back(5);
	vec.push_back(10);
	vec.push_back(17);
	
	{
		try {
			std::cout << YELLOW << "\nTest #002 - Search 0" << WHITE << std::endl;
			std::vector<int>::iterator it = easyfind(vec, 0);
			std::cout << GREEN << "Value " << *it << " found at pos " << std::distance(vec.begin(), it) << WHITE << std::endl;
		} catch (std::exception &e) {
			std::cout << MAGENTA << e.what() << WHITE << std::endl;
		}
	}

	{
		try {
			std::cout << YELLOW << "\nTest #003 - Search 5" << WHITE << std::endl;
			std::vector<int>::iterator it = easyfind(vec, 5);
			std::cout << GREEN << "Value " << *it << " found at pos " << std::distance(vec.begin(), it) << WHITE << std::endl;
		} catch (std::exception &e) {
			std::cout << MAGENTA << e.what() << WHITE << std::endl;
		}
	}

	{
		try {
			std::cout << YELLOW << "\nTest #004 - Search 10" << WHITE << std::endl;
			std::vector<int>::iterator it = easyfind(vec, 10);
			std::cout << GREEN << "Value " << *it << " found at pos " << std::distance(vec.begin(), it) << WHITE << std::endl;
		} catch (std::exception &e) {
			std::cout << MAGENTA << e.what() << WHITE << std::endl;
		}
	}

	{
		try {
			std::cout << YELLOW << "\nTest #005 - Search 15" << WHITE << std::endl;
			std::vector<int>::iterator it = easyfind(vec, 15);
			std::cout << GREEN << "Value " << *it << " found at pos " << std::distance(vec.begin(), it) << WHITE << std::endl;
		} catch (std::exception &e) {
			std::cout << MAGENTA << e.what() << WHITE << std::endl;
		}
	}

	{
		try {
			std::cout << YELLOW << "\nTest #006 - Search 17" << WHITE << std::endl;
			std::vector<int>::iterator it = easyfind(vec, 17);
			std::cout << GREEN << "Value " << *it << " found at pos " << std::distance(vec.begin(), it) << WHITE << std::endl;
		} catch (std::exception &e) {
			std::cout << MAGENTA << e.what() << WHITE << std::endl;
		}
	}

	{
		try {
			std::cout << YELLOW << "\nTest #007 - Search 20" << WHITE << std::endl;
			std::vector<int>::iterator it = easyfind(vec, 20);
			std::cout << GREEN << "Value " << *it << " found at pos " << std::distance(vec.begin(), it) << WHITE << std::endl;
		} catch (std::exception &e) {
			std::cout << MAGENTA << e.what() << WHITE << std::endl;
		}
	}
	
	return (0);
}