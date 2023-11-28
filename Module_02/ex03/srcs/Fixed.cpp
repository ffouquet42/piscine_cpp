/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 08:15:39 by fllanet           #+#    #+#             */
/*   Updated: 2023/11/28 08:16:47 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

Fixed::Fixed() : _value(0) {}

Fixed::~Fixed() {}

Fixed::Fixed(const Fixed &cpy) { *this = cpy; }

Fixed &Fixed::operator=(const Fixed &cpy)
{
	_value = cpy.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const { return (_value); }

void	Fixed::setRawBits(int const raw) { _value = raw; }

Fixed::Fixed(const int nb) { _value = nb << _bits; }

Fixed::Fixed(const float nb) { _value = roundf(nb * (1 << _bits)); }

int		Fixed::toInt(void) const { return _value >> _bits; }

float	Fixed::toFloat(void) const { return static_cast<float>(_value) / (1 << _bits); }

std::ostream &operator<<(std::ostream &os, const Fixed &cpy) { return (os << cpy.toFloat()); }

bool	Fixed::operator>(const Fixed &fixed) const
{
	if (toFloat() > fixed.toFloat())
		return (1);
	return (0);
}

bool	Fixed::operator<(const Fixed &fixed) const
{
	if (toFloat() < fixed.toFloat())
		return (1);
	return (0);
}

bool	Fixed::operator>=(const Fixed &fixed) const
{
	if (toFloat() >= fixed.toFloat())
		return (1);
	return (0);
}

bool	Fixed::operator<=(const Fixed &fixed) const
{
	if (toFloat() <= fixed.toFloat())
		return (1);
	return (0);
}

bool	Fixed::operator==(const Fixed &fixed) const
{
	if (toFloat() == fixed.toFloat())
		return (1);
	return (0);
}

bool	Fixed::operator!=(const Fixed &fixed) const
{
	if (toFloat() != fixed.toFloat())
		return (1);
	return (0);
}

Fixed	Fixed::operator+(const Fixed &fixed) const { return (Fixed(toFloat() + fixed.toFloat())); }

Fixed	Fixed::operator-(const Fixed &fixed) const { return (Fixed(toFloat() - fixed.toFloat())); }

Fixed	Fixed::operator*(const Fixed &fixed) const { return (Fixed(toFloat() * fixed.toFloat())); }

Fixed	Fixed::operator/(const Fixed &fixed) const
{
	if (fixed.toFloat() != 0.0f)
		return (Fixed(toFloat() / fixed.toFloat()));
	return (std::cout << "/!\\ DIVISION BY 0 /!\\" << std::endl, *this);
}

Fixed	&Fixed::operator++() { return (_value++, *this); }

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);
	return (_value++, tmp);
}

Fixed	&Fixed::operator--() { return (_value--, *this); }

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);
	return (_value--, tmp);
}

Fixed	&Fixed::min(Fixed &fix1, Fixed &fix2) { return (fix1 < fix2) ? fix1 : fix2; }

const Fixed	&Fixed::min(Fixed const &fix1, Fixed const &fix2) { return (fix1 < fix2) ? fix1 : fix2; }

Fixed	&Fixed::max(Fixed &fix1, Fixed &fix2) { return (fix2 < fix1) ? fix2 : fix1; }

const Fixed	&Fixed::max(Fixed const &fix1, Fixed const &fix2) { return (fix2 < fix1) ? fix1 : fix2; }