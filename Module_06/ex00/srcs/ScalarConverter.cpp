/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 18:19:41 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/19 21:57:37 by fllanet          ###   ########.fr       */
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

void	display_char(const char *str, double floating_point_nb)
{
	std::cout << BLUE << "\nChar  : " << WHITE;
	if (str && str[0] && !str[1] && !is_number(str[0]))
		std::cout << "\'" << str[0] << "\'";
	else if (floating_point_nb <= 31 && floating_point_nb >= 0)
		std::cout << "Non displayable";
	else if (floating_point_nb < 0 || floating_point_nb >= 127 || !(floating_point_nb >= 0 || floating_point_nb <= 0))
		std::cout << "Impossible";
	else
		std::cout << "\'" << static_cast<char>(floating_point_nb) << "\'";
	std::cout << std::endl;
}

void	display_int(const char *str, double floating_point_nb)
{
	std::cout << BLUE << "Int   : " << WHITE;
	int	res = static_cast<int>(floating_point_nb);
	if (!(floating_point_nb >= 0 || floating_point_nb <= 0))
		std::cout << "Impossible";
	else if (floating_point_nb < -2147483648 || floating_point_nb > 2147483647)
		std::cout << "Impossible";
	else if (str && str[0] && !is_number(str[0]) && !str[1])
		std::cout << static_cast<int>(str[0]);
	else
		std::cout << res;
	std::cout << std::endl;
}

void	display_float(const char *str, double floating_point_nb)
{
	float	valueFloat = static_cast<float>(floating_point_nb);
	std::cout << BLUE << "Float : " << WHITE;
	if (str && str[0] && !is_number(str[0]) && !str[1])
		std::cout << std::fixed << std::setprecision(1) << static_cast<double>(str[0]);
	else
		std::cout << std::fixed << std::setprecision(1) << valueFloat;
	std::cout << "f" << std::endl;
}

void	display_double(const char *str, double floating_point_nb)
{
	std::cout << BLUE << "Double: " << WHITE;
	if (str && str[0] && !is_number(str[0]) && !str[1])
		std::cout << BLUE << std::fixed << std::setprecision(1) << static_cast<double>(str[0]) << WHITE << std::endl << std::endl;
	else
		std::cout << BLUE << std::fixed << std::setprecision(1) << floating_point_nb << WHITE << std::endl << std::endl;
}

void	ScalarConverter::convert(std::string str)
{
	const char *new_str = str.c_str();
	double floating_point_nb = std::strtod(new_str, 0);

	display_char(new_str, floating_point_nb);
	display_int(new_str, floating_point_nb);
	display_float(new_str, floating_point_nb);
	display_double(new_str, floating_point_nb);
}