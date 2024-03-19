/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 21:43:33 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/19 22:27:15 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScalarConverter.hpp"

static int	invalid_common_form(std::string str)
{
	if ((str[0] && !str[1]) || str == "-inff" || str == "nanf" || str == "+inff" || str == "-inf" || str == "+inf" || str == "nan")
		return (0);
		
	int	dot = 0;
	int i = (str[0] == '-' || str[0] == '+') ? 1 : 0;

	while (str[i])
	{
		if (str[i] == '.')
		{
			dot++;
			if (dot > 1)
				return (1);
		}
		else if (str[i] == 'f' && !str[i + 1])
			return (0);
		else if (!(str[i] >= '0' && str[i] <= '9'))
				return (1);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		std::string str(argv[1]);
		if (invalid_common_form(str))
		{
			std::cout << RED << "\nChar  : Impossible" << std::endl;
			std::cout << "Int   : Impossible" << std::endl;
			std::cout << "Float : Impossible" << std::endl;
			std::cout << "Double: Impossible\n" << WHITE << std::endl;
			return (0);
		}
		ScalarConverter::convert(str);
		return (0);
	}
	return (std::cout << RED << "Need one argument" << WHITE << std::endl, 1);
}