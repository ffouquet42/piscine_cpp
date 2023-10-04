/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:47:35 by fllanet           #+#    #+#             */
/*   Updated: 2023/10/04 16:44:00 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/program.hpp"

int	main(int argc, char **argv)
{
	int exit = 0;
	std::string user_input;
	
	display_welcome();
	while (!exit)
	{
		display_menu();
		std::cin >> user_input;
		std::cout << std::endl << std::endl;
		if (user_input == "add" || user_input == "ADD")
		;
		else if (user_input == "search" || user_input == "SEARCH")
		;
		else if (user_input == "exit" || user_input == "EXIT")
			break;
		else
			std::cout << MAGENTA << "/!\\ INVALID CHOICE /!\\" << WHITE << std::endl;
	}
	return (0);
}