/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:28:22 by fllanet           #+#    #+#             */
/*   Updated: 2023/10/04 18:51:22 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/program.hpp"

PhoneBook::PhoneBook() : _number_of_contacts(0) {}
PhoneBook::~PhoneBook() {}

void PhoneBook::addContact()
{
	_contacts[_number_of_contacts].createNewContact();
	_number_of_contacts++;
}

void PhoneBook::searchContact()
{
	
}