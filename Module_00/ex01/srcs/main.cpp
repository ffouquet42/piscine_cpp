/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:47:35 by fllanet           #+#    #+#             */
/*   Updated: 2023/11/16 15:48:14 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/program.hpp"

int	main(void)
{
	std::string user_input;
	PhoneBook	phonebook;
	
	display_welcome();
	while (1)
	{
		display_menu();
		std::getline(std::cin, user_input);
		std::cout << std::endl << std::endl;
		if (user_input == "ADD")
			phonebook.addContact();
		else if (user_input == "SEARCH")
			phonebook.searchContact();
		else if (user_input == "EXIT")
			break;
	}
	return (0);
}