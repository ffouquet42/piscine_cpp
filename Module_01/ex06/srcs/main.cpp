/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 06:05:58 by fllanet           #+#    #+#             */
/*   Updated: 2023/11/26 06:40:42 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int	main(int argc, char **argv)
{
	int i = 0;
	Harl harl;
	std::string level_array[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	
	if (argc == 2)
	{
		while (i < 4)
		{
			if (argv[1] == level_array[i])
				break;
			i++;
		}
		while (i < 4)
		{
			harl.complain(level_array[i]);
			i++;
		}
	}
	return (0);
}