/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 08:36:01 by fllanet           #+#    #+#             */
/*   Updated: 2023/11/27 09:28:23 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//---------------   includes   ---------------//
# include <iostream>

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
		
	private:
		int					_value;
		static const int	_bits = 8;
};

//---------------   colors   ---------------//
# define RED		"\x1B[31m"
# define GREEN		"\x1B[32m"
# define LIME 		"\x1B[38;5;118m"
# define YELLOW		"\x1B[33m"
# define BLUE		"\x1B[34m"
# define MAGENTA	"\x1B[35m"
# define CYAN		"\x1B[36m"
# define WHITE		"\x1B[0m"