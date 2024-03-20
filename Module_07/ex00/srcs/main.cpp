/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 22:26:54 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/20 02:40:02 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/whatever.hpp"

int main(void)
{
	{
		std::cout << YELLOW << "\nTest #001: Int" << WHITE << std::endl;

		int a = 1;
		int b = 2;
		std::cout << "A = " << a << " and B = " << b << std::endl;
		
		swap(a, b);
		std::cout << BLUE << "Swap:" << WHITE << std::endl;
		std::cout << GREEN << "A = " << a << " and B = " << b << WHITE << std::endl;
		
		int int_value = min(a, b);
		std::cout << BLUE << "Min:" << WHITE << std::endl;
		std::cout << GREEN << int_value << WHITE << std::endl;
		
		int_value = max(a, b);
		std::cout << BLUE << "Max:" << WHITE << std::endl;
		std::cout << GREEN << int_value << WHITE << std::endl;
	}
	
	{
		std::cout << YELLOW << "\nTest #002: Float" << WHITE << std::endl;
		
		float a = 1.1f;
		float b = 2.2f;
		std::cout << "A = " << a << " and B = " << b << std::endl;
		
		swap(a, b);
		std::cout << BLUE << "Swap:" << WHITE << std::endl;
		std::cout << GREEN << "A = " << a << " and B = " << b << WHITE << std::endl;
		
		float float_value = min(a, b);
		std::cout << BLUE << "Min:" << WHITE << std::endl;
		std::cout << GREEN << float_value << WHITE << std::endl;
		
		float_value = max(a, b);
		std::cout << BLUE << "Max:" << WHITE << std::endl;
		std::cout << GREEN << float_value << WHITE << std::endl;
	}

	{
		std::cout << YELLOW << "\nTest #003: Double" << WHITE << std::endl;
		
		double a = 1.1;
		double b = 2.2;
		std::cout << "A = " << a << " and B = " << b << std::endl;
		
		swap(a, b);
		std::cout << BLUE << "Swap:" << WHITE << std::endl;
		std::cout << GREEN << "A = " << a << " and B = " << b << WHITE << std::endl;
		
		double double_value = min(a, b);
		std::cout << BLUE << "Min:" << WHITE << std::endl;
		std::cout << GREEN << double_value << WHITE << std::endl;
		
		double_value = max(a, b);
		std::cout << BLUE << "Max:" << WHITE << std::endl;
		std::cout << GREEN << double_value << WHITE << std::endl;
	}
	
	{
		std::cout << YELLOW << "\nTest #004: String" << WHITE << std::endl;
		
		std::string a = "string 1";
		std::string b = "string 2";
		std::cout << "A = \"" << a << "\" and B = \"" << b << "\"" << std::endl;
		
		swap(a, b);
		std::cout << BLUE << "Swap:" << WHITE << std::endl;
		std::cout << GREEN << "A = \"" << a << "\" and B = \"" << b << "\"" << WHITE << std::endl;
		
		std::cout << BLUE << "Min:" << WHITE << std::endl;
		std::cout << GREEN << "\"" << std::min(a, b) << "\"" << WHITE << std::endl;

		std::cout << BLUE << "Max:" << WHITE << std::endl;
		std::cout << GREEN << "\"" << std::max(a, b) << "\"" << WHITE << std::endl << std::endl;
	}

	{ 	// subject main
		std::cout << YELLOW << "\nTest #005: Subject Tests" << WHITE << std::endl;

		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

		// should return:
		// a = 3, b = 2
		// min(a, b) = 2
		// max(a, b) = 3
		// c = chaine2, d = chaine1
		// min(c, d) = chaine1
		// max(c, d) = chaine2
	}
	
	return (0);
}