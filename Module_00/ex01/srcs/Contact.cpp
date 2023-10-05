/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:28:20 by fllanet           #+#    #+#             */
/*   Updated: 2023/10/05 14:50:19 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/program.hpp"

Contact::Contact() {}
Contact::~Contact() {}

// public

void	Contact::createNewContact()
{
	std::string user_input;
	
	std::cout << MAGENTA << "Create a new contact !" << WHITE << std::endl;

	std::cout << CYAN << "First name > " << WHITE;
	std::cin >> user_input;
	setFirstName(user_input);

	std::cout << CYAN << "Last name > " << WHITE;
	std::cin >> user_input;
	setLastName(user_input);

	std::cout << CYAN << "Nickname > " << WHITE;
	std::cin >> user_input;
	setNickname(user_input);

	std::cout << CYAN << "Phone number > " << WHITE;
	std::cin >> user_input;
	setPhoneNumber(user_input);

	std::cout << CYAN << "Darkest secret > " << WHITE;
	std::cin >> user_input;
	setDarkestSecret(user_input);
}

std::string	cutSizeMax(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	return (str);
}

void	Contact::showMinInfos()
{
	std::cout << YELLOW << std::setw(10) << cutSizeMax(_firstName) << "|";
	std::cout << YELLOW << std::setw(10) << cutSizeMax(_lastName) << "|";
	std::cout << YELLOW << std::setw(10) << cutSizeMax(_nickname) << "|" << WHITE << std::endl;
}

void	Contact::showFullInfos()
{
	
}

// private

void	Contact::setFirstName(std::string firstName) { _firstName = firstName; }
void	Contact::setLastName(std::string lastName) { _lastName = lastName; }
void	Contact::setNickname(std::string nickname) { _nickname = nickname; }
void	Contact::setPhoneNumber(std::string phoneNumber) { _phoneNumber = phoneNumber; }
void	Contact::setDarkestSecret(std::string darkestSecret) { _darkestSecret = darkestSecret; }