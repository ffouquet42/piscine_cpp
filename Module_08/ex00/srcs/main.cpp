/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 03:10:47 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/21 03:33:34 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/easyfind.hpp"

int	main()
{
	std::vector<int> arr;

	for (int i = 0; i < 6; i++)
		arr.push_back(i);
	arr.push_back(9);
	
	{
		try {
			std::vector<int>::iterator it = easyfind(arr, 3);
			std::cout << std::distance(arr.begin(), it) << std::endl;
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}

	{
		try {
			std::vector<int>::iterator it = easyfind(arr, 9);
			std::cout << std::distance(arr.begin(), it) << std::endl;
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	
	return (0);
}