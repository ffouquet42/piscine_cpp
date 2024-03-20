/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 22:26:54 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/20 03:15:48 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/iter.hpp"

int main(void)
{
	{
		std::cout << YELLOW << "\nTest #001 - Iter <int>" << WHITE << std::endl;
		std::cout << BLUE << "Array = [1, 2, 3, 4, 5]" << WHITE << std::endl;
		int arr[] = { 1, 2, 3, 4, 5 };
		std::cout << GREEN << "Iter" << WHITE << std::endl;
		iter<int>(arr, 5, print);
	}

	{
		std::cout << YELLOW << "\n\nTest #002 - Iter <char>" << WHITE << std::endl;
		std::cout << BLUE << "Array = ['i', 't', 'e', 'r', '9']" << WHITE << std::endl;
		char arr[] = { 'i', 't', 'e', 'r', '9' };
		std::cout << GREEN << "Iter" << WHITE << std::endl;
		iter<char>(arr, 5, print);
	}

	{
		std::cout << YELLOW << "\n\nTest #003 - Iter <float>" << WHITE << std::endl;
		std::cout << BLUE << "Array = [1.1f, 2.2f, 3.3f, 4.4f, 5.5f]" << WHITE << std::endl;
		float arr[] = { 1.1f, 2.2f, 3.3f, 4.4f, 5.5f };
		std::cout << GREEN << "Iter" << WHITE << std::endl;
		iter<float>(arr, 5, print);
	}

	{
		std::cout << YELLOW << "\n\nTest #004 - Iter <double>" << WHITE << std::endl;
		std::cout << BLUE << "Array = [1.1, 2.2, 3.3, 4.4, 5.5]" << WHITE << std::endl;
		double arr[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
		std::cout << GREEN << "Iter" << WHITE << std::endl;
		iter<double>(arr, 5, print);
	}

	return (0);
}