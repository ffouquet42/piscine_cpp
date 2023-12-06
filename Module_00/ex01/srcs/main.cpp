/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:47:35 by fllanet           #+#    #+#             */
/*   Updated: 2023/12/06 10:51:35 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"
#include "../includes/PhoneBook.hpp"

int	only_digit(std::string str)
{
	int i = 0;
	
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '7')
			return (1);
		i++;
	}
	return (0);
}

int	valid_index(std::string str)
{
	int i = 0;
	
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (only_digit(&str[i]))
		return (-1);
	if (str[i + 1])
		return (-1);
	return (str[i] - 48);
}

int	main(void)
{
	std::string user_input;
	PhoneBook	phonebook;
	
	std::cout << MAGENTA << "\n\n\nHELLO, WELCOME IN YOUR PHONE BOOK !\n" << WHITE << std::endl;
	while (1)
	{
		std::cout << MAGENTA << "\nWhat do you want to do?\n" << WHITE << std::endl;
		std::cout << GREEN << "ADD" << WHITE << " - Create a new contact\n" << std::endl;
		std::cout << BLUE << "SEARCH" << WHITE << " - Research a contact\n" << std::endl;
		std::cout << RED << "EXIT" << WHITE << " - Quit the phone book\n" << std::endl;
		std::cout << CYAN << "> " << WHITE;
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