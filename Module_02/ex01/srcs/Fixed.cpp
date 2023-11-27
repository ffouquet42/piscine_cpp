/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:46:54 by fllanet           #+#    #+#             */
/*   Updated: 2023/11/27 15:20:12 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed() : _value(0) { std::cout << GREEN << "Default constructor called" << WHITE << std::endl; }

Fixed::~Fixed() { std::cout << RED << "Destructor called" << WHITE << std::endl; }

Fixed::Fixed(const Fixed &cpy)
{
	std::cout << GREEN << "Copy constructor called" << WHITE << std::endl;
	*this = cpy;
}

Fixed &Fixed::operator=(const Fixed &cpy)
{
	std::cout << YELLOW << "Copy assignement operator called" << WHITE << std::endl;
	_value = cpy.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const { return (_value); }

void	Fixed::setRawBits(int const raw) { _value = raw; }

// *****   NEW   *****
Fixed::Fixed(const int nb)
{
	std::cout << LIME << "Int constructor called" << WHITE << std::endl;
	_value = nb << _bits;
}

Fixed::Fixed(const float nb)
{
	std::cout << LIME << "Float constructor called" << WHITE << std::endl;
	_value = roundf(nb * (1 << _bits));
}

int		Fixed::toInt(void) const { return _value >> _bits; }

float	Fixed::toFloat(void) const { return static_cast<float>(_value) / (1 << _bits); }

std::ostream &operator<<(std::ostream &stream, const Fixed &fixed) { return (stream << fixed.toFloat()); }
// *****   NEW   *****