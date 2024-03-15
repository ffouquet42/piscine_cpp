/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 18:19:41 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/15 18:46:49 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"

//---------------   Constructors & Destructors   ---------------//

ScalarConverter::ScalarConverter()
{
	std::cout << GREEN << "++ ScalarConverter default constructor called" << WHITE << std::endl;
}


//---------------   Functions   ---------------//

void	display_char(const char *str, double floating_point_nb)
{
	
}

void	display_int(const char *str, double floating_point_nb)
{
	
}

void	display_float(const char *str, double floating_point_nb)
{
	
}

void	display_double(const char *str, double floating_point_nb)
{
	
}

void	ScalarConverter::convert(std::string str)
{
	const char *new_str = str.c_str(); //
	double floating_point_nb = std::strtod(new_str, 0); //

	display_char(new_str, floating_point_nb);
	display_int(new_str, floating_point_nb);
	display_float(new_str, floating_point_nb);
	display_double(new_str, floating_point_nb);
}