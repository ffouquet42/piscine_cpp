/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:46:49 by fllanet           #+#    #+#             */
/*   Updated: 2023/11/27 15:20:23 by fllanet          ###   ########.fr       */
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
		
		// *****   NEW   *****
		Fixed(const int nb);
		Fixed(const float nb);
		
		int		toInt(void) const;
		float	toFloat(void) const;
		// *****   NEW   *****

	private:
		int					_value;
		static const int	_bits = 8;
};

// *****   NEW   *****
std::ostream &operator<<(std::ostream &stream, const Fixed &fixed);

//---------------   colors   ---------------//
# define RED		"\x1B[31m"
# define GREEN		"\x1B[32m"
# define LIME 		"\x1B[38;5;118m"
# define YELLOW		"\x1B[33m"
# define BLUE		"\x1B[34m"
# define MAGENTA	"\x1B[35m"
# define CYAN		"\x1B[36m"
# define WHITE		"\x1B[0m"