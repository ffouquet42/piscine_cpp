/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 08:15:32 by fllanet           #+#    #+#             */
/*   Updated: 2023/11/28 08:16:22 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//---------------   includes   ---------------//
# include <iostream>
# include <cmath>

//---------------   class   ---------------//
class Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &cpy);
		Fixed &operator=(const Fixed &cpy);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		
		Fixed(const int nb);
		Fixed(const float nb);
		
		int		toInt(void) const;
		float	toFloat(void) const;
		
		bool	operator>(const Fixed &fixed) const;
		bool	operator<(const Fixed &fixed) const;
		bool	operator>=(const Fixed &fixed) const;
		bool	operator<=(const Fixed &fixed) const;
		bool	operator==(const Fixed &fixed) const;
		bool	operator!=(const Fixed &fixed) const;

		Fixed	operator+(const Fixed &fixed) const;
		Fixed	operator-(const Fixed &fixed) const;
		Fixed	operator*(const Fixed &fixed) const;
		Fixed	operator/(const Fixed &fixed) const;

		Fixed	&operator++();
		Fixed	operator++(int);
		Fixed	&operator--();
		Fixed	operator--(int);
		
		static Fixed		&min(Fixed &fix1, Fixed &fix2);
		static const Fixed	&min(Fixed const &fix1, Fixed const &fix2);
		static Fixed		&max(Fixed &fix1, Fixed &fix2);
		static const Fixed	&max(Fixed const &fix1, Fixed const &fix2);

	private:
		int					_value;
		static const int	_bits = 8;
};

std::ostream &operator<<(std::ostream &os, const Fixed &cpy);

//---------------   colors   ---------------//
# define RED		"\x1B[31m"
# define GREEN		"\x1B[32m"
# define LIME 		"\x1B[38;5;118m"
# define YELLOW		"\x1B[33m"
# define BLUE		"\x1B[34m"
# define MAGENTA	"\x1B[35m"
# define CYAN		"\x1B[36m"
# define WHITE		"\x1B[0m"