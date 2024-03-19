/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 18:19:41 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/19 22:36:29 by fllanet          ###   ########.fr       */
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
	if (str && str[0] && !str[1] && !is_number(str[0]))
		std::cout << "\'" << str[0] << "\'";
	else if (str_as_double <= 31 && str_as_double >= 0)
		std::cout << "Non displayable";
	else if (str_as_double < 0 || str_as_double >= 127 || !(str_as_double >= 0 || str_as_double <= 0))
		std::cout << "Impossible";
	else
		std::cout << "\'" << static_cast<char>(str_as_double) << "\'";
	std::cout << std::endl;
}

void	display_int(const char *str, double str_as_double)
{
	std::cout << BLUE << "Int   : " << WHITE;
	int	res = static_cast<int>(str_as_double);
	if (!(str_as_double >= 0 || str_as_double <= 0))
		std::cout << "Impossible";
	else if (str_as_double < -2147483648 || str_as_double > 2147483647)
		std::cout << "Impossible";
	else if (str && str[0] && !is_number(str[0]) && !str[1])
		std::cout << static_cast<int>(str[0]);
	else
		std::cout << res;
	std::cout << std::endl;
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

	std::cout << MAGENTA << "str = " << str_as_char << WHITE << std::endl;
	std::cout << MAGENTA << "nb  = " << str_as_double << WHITE << std::endl;

	display_char(str_as_char, str_as_double);
	display_int(str_as_char, str_as_double);
	display_float(str_as_char, str_as_double);
	display_double(str_as_char, str_as_double);
}