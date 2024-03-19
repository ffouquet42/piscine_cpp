/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 18:19:41 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/19 23:02:19 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"

//---------------   Constructors & Destructors   ---------------//

ScalarConverter::ScalarConverter()
{
	std::cout << GREEN << "++ ScalarConverter default constructor called" << WHITE << std::endl;
}


//---------------   Functions   ---------------//

int	is_number(char c)
{
	return (c >= '0' && c <= '9');
}

void	display_char(const char *str, double str_as_double)
{
	std::cout << BLUE << "\nChar  : " << WHITE;
	if (str && str[0] && !is_number(str[0]) && !str[1]) // une lettre + 3x en bas
		std::cout << BLUE << "\'" << str[0] << "\'" << WHITE << std::endl;
	else if (str_as_double < 32 && str_as_double >= 0)
		std::cout << CYAN << "Non displayable" << WHITE << std::endl;
	else if (str_as_double < 0 || str_as_double >= 127 || !(str_as_double >= 0 || str_as_double <= 0)) // nan + 1x en bas
		std::cout << CYAN << "Impossible" << WHITE << std::endl;
	else
		std::cout << BLUE << "\'" << static_cast<char>(str_as_double) << "\'" << WHITE << std::endl;
}

void	display_int(const char *str, double str_as_double)
{
	std::cout << BLUE << "Int   : " << WHITE;
	if ((!(str_as_double >= 0 || str_as_double <= 0)) || (str_as_double < -2147483648 || str_as_double > 2147483647))
		std::cout << CYAN << "Impossible" << WHITE << std::endl;
	else if (str && str[0] && !is_number(str[0]) && !str[1])
		std::cout << BLUE << static_cast<int>(str[0]) << WHITE << std::endl;
	else
		std::cout << BLUE << static_cast<int>(str_as_double) << WHITE << std::endl;
}

void	display_float(const char *str, double str_as_double)
{
	std::cout << BLUE << "Float : " << WHITE;
	if (str && str[0] && !is_number(str[0]) && !str[1])
		std::cout << BLUE << std::fixed << std::setprecision(1) << static_cast<float>(str[0]) << "f" << WHITE << std::endl;
	else
		std::cout << BLUE << std::fixed << std::setprecision(1) << static_cast<float>(str_as_double) << "f" << WHITE << std::endl;
}

void	display_double(const char *str, double str_as_double)
{
	std::cout << BLUE << "Double: " << WHITE;
	if (str && str[0] && !is_number(str[0]) && !str[1])
		std::cout << BLUE << std::fixed << std::setprecision(1) << static_cast<double>(str[0]) << WHITE << std::endl << std::endl;
	else
		std::cout << BLUE << std::fixed << std::setprecision(1) << str_as_double << WHITE << std::endl << std::endl;
}

void	ScalarConverter::convert(std::string str)
{
	const char *str_as_char = str.c_str();
	double str_as_double = std::strtod(str_as_char, 0);

	display_char(str_as_char, str_as_double);
	display_int(str_as_char, str_as_double);
	display_float(str_as_char, str_as_double);
	display_double(str_as_char, str_as_double);
}