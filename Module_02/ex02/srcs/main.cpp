/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:13:36 by fllanet           #+#    #+#             */
/*   Updated: 2023/12/07 12:20:08 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	// std::cout << --a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a-- << std::endl;
	// std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;

	std::cout << std::endl << std::endl;

	Fixed nb1;
	Fixed nb2(10.9f);
	Fixed nb3(10);
	
	std::cout << "nb1 = " << BLUE << nb1 << WHITE << std::endl;
	std::cout << "nb2 = " << YELLOW << nb2 << WHITE << std::endl;
	std::cout << "nb3 = " << CYAN << nb3 << WHITE << std::endl << std::endl;
	
	std::cout << nb1 << " > " << nb2 << " ? " << GREEN << nb1.operator>(nb2) << WHITE << std::endl;

	std::cout << nb1 << " < " << nb2 << " ? " << GREEN << nb1.operator<(nb2) << WHITE << std::endl;

	std::cout << nb2 << " >= " << nb3 << " ? " << GREEN << nb2.operator>=(nb3) << WHITE << std::endl;

	std::cout << nb2 << " <= " << nb3 << " ? " << GREEN << nb2.operator<=(nb3) << WHITE << std::endl;

	std::cout << nb2 << " == " << nb3 << " ? " << GREEN << nb2.operator==(nb3) << WHITE << std::endl;

	std::cout << nb1 << " == " << nb2 << " ? " << GREEN << nb1.operator==(nb2) << WHITE << std::endl;

	std::cout << nb2 << " != " << nb3 << " ? " << GREEN << nb2.operator!=(nb3) << WHITE << std::endl;

	std::cout << nb1 << " != " << nb2 << " ? " << GREEN << nb1.operator!=(nb2) << WHITE << std::endl;
	
	std::cout << std::endl;
	
	std::cout << nb1 << " + " << nb2 << " = " << GREEN << nb1.operator+(nb2) << WHITE << std::endl;

	std::cout << nb1 << " - " << nb2 << " = " << GREEN << nb1.operator-(nb2) << WHITE << std::endl;

	std::cout << nb2 << " * " << nb3 << " = " << GREEN << nb2.operator*(nb3) << WHITE << std::endl;

	std::cout << nb2 << " / " << nb3 << " = " << GREEN << nb2.operator/(nb3) << WHITE << std::endl;

	std::cout << nb2 << " / " << nb1 << " = " << GREEN << nb2.operator/(nb1) << WHITE << std::endl;

	std::cout << std::endl;

	std::cout << nb2 << " et " << nb1 << ", min = " << GREEN << Fixed::min(nb1, nb2) << WHITE << std::endl;

	std::cout << nb2 << " et " << nb1 << ", max = " << GREEN << Fixed::max(nb1, nb2) << WHITE << std::endl;

	return 0;
}