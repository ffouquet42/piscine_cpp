/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 22:26:54 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/17 23:28:59 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/whatever.hpp"

int main(void)
{
	int a = 1;
	int b = 2;
	std::cout << YELLOW << "A = " << a << " and B = " << b << WHITE << std::endl;
	
	swap(a, b);
	std::cout << BLUE << "\nSwap" << WHITE << std::endl;
	std::cout << GREEN << "A = " << a << " and B = " << b << WHITE << std::endl;
	
	int int_value = min(a, b);
	std::cout << BLUE << "\nMin" << WHITE << std::endl;
	std::cout << GREEN << int_value << WHITE << std::endl;
	
	int_value = max(a, b);
	std::cout << BLUE << "\nMax" << WHITE << std::endl;
	std::cout << GREEN << int_value << WHITE << std::endl;
	

	std::string c = "string 1";
	std::string d = "string 2";
	std::cout << YELLOW << "\n\n\nC = \"" << c << "\" and D = \"" << d << "\"" << WHITE << std::endl;
	
	swap(c, d);
	std::cout << BLUE << "\nSwap" << WHITE << std::endl;
	std::cout << GREEN << "C = \"" << c << "\" and D = \"" << d << "\"" << WHITE << std::endl;
	
	std::cout << BLUE << "\nMin" << WHITE << std::endl;
	std::cout << GREEN << std::min(c, d) << WHITE << std::endl;

	std::cout << BLUE << "\nMax" << WHITE << std::endl;
	std::cout << GREEN << std::max(c, d) << WHITE << std::endl;
	
	return (0);
}