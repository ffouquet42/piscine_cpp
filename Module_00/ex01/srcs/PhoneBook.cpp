/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:28:22 by fllanet           #+#    #+#             */
/*   Updated: 2023/12/06 11:18:07 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook() : _number_of_contacts(0), _contact_to_delete(0) {}
PhoneBook::~PhoneBook() {}

// public

void PhoneBook::addContact()
{
	if (_number_of_contacts < 8)
	{
		_contacts[_number_of_contacts].createNewContact();
		_number_of_contacts++;
	}
	else if (_number_of_contacts == 8)
	{
		_contacts[_contact_to_delete].createNewContact();
		_contact_to_delete++;
		_contact_to_delete = (_contact_to_delete == 8) ? 0 : _contact_to_delete;
	}
}

void PhoneBook::searchContact()
{
	std::string user_input;
	int index = -1;
	
	if (_number_of_contacts == 0)
	{
		std::cout << MAGENTA << "Phonebook is empty" << std::endl;
		return;
	}
	else if (_number_of_contacts > 0 && _number_of_contacts <= 8)
	{
		std::cout << YELLOW << std::setw(10) << "index" << "|";
		std::cout << std::setw(10) << "first name" << "|";
		std::cout << std::setw(10) << "last name" << "|";
		std::cout << std::setw(10) << "nickname" << "|" << WHITE << std::endl;
		for (int i = 0; i < _number_of_contacts; i++)
		{
			std::cout << YELLOW << std::setw(10) << i << "|" << WHITE;
			_contacts[i].showMinInfos();
		}
	}
	while (index < 0 || index > _number_of_contacts - 1)
	{
		std::cout << MAGENTA << "Enter the index of the contact to display" << std::endl;
		std::cout << CYAN << "> " << WHITE;
		std::getline(std::cin, user_input);
		if (user_input.empty())
			index = -1;
		else
			index = valid_index(user_input);
	}
	_contacts[index].showFullInfos(index);
}