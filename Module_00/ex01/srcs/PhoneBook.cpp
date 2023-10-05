/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:28:22 by fllanet           #+#    #+#             */
/*   Updated: 2023/10/05 14:57:55 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/program.hpp"

PhoneBook::PhoneBook() : _number_of_contacts(0) {}
PhoneBook::~PhoneBook() {}

// public

void PhoneBook::addContact()
{
	_contacts[_number_of_contacts].createNewContact();
	_number_of_contacts++;
}

void PhoneBook::searchContact()
{
	if (_number_of_contacts == 0)
	{
		std::cout << MAGENTA << "Phonebook is empty" << std::endl;
		return;
	}
	else if (_number_of_contacts > 0 && _number_of_contacts <= 8)
	{
		display_contacts_list_hud();
		for (int i = 0; i < _number_of_contacts; i++)
		{
			std::cout << YELLOW << std::setw(10) << i << "|" << WHITE;
			_contacts[i].showMinInfos();
		}
	}
	
}