/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 08:36:03 by fllanet           #+#    #+#             */
/*   Updated: 2023/11/27 09:42:53 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed() : _value(0) { std::cout << GREEN << "Default constructor called" << WHITE << std::endl; }

Fixed::~Fixed() { std::cout << RED << "Destructor called" << WHITE << std::endl; }

Fixed::Fixed(const Fixed &cpy)
{
	std::cout << LIME << "Copy constructor called" << WHITE << std::endl;
	*this = cpy;
}

Fixed &Fixed::operator=(const Fixed &cpy)
{
	std::cout << YELLOW << "Copy assignement operator called" << WHITE << std::endl;
	_value = cpy.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << BLUE << "getRawBits member function called" << WHITE << std::endl;
	return (_value);
}

void	Fixed::setRawBits(int const raw) { _value = raw; }