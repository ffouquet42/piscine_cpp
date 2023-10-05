/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:53:37 by fllanet           #+#    #+#             */
/*   Updated: 2023/10/05 14:55:57 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/program.hpp"

void	display_welcome()
{
	std::cout << MAGENTA << "\n\n\nHELLO, WELCOME IN YOUR PHONE BOOK !\n" << WHITE << std::endl;
}

void	display_menu()
{
	std::cout << MAGENTA << "\nWhat do you want to do?\n" << WHITE << std::endl;
	std::cout << GREEN << "ADD" << WHITE << " - Create a new contact\n" << std::endl;
	std::cout << BLUE << "SEARCH" << WHITE << " - Research a contact\n" << std::endl;
	std::cout << RED << "EXIT" << WHITE << " - Quit the phone book\n" << std::endl;
	std::cout << CYAN << "> " << WHITE;
}

void	display_contacts_list_hud()
{
	std::cout << YELLOW << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nickname" << "|" << WHITE << std::endl;
}