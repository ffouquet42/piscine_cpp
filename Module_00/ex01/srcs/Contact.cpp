/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:28:20 by fllanet           #+#    #+#             */
/*   Updated: 2023/10/04 18:50:14 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/program.hpp"

Contact::Contact() {}
Contact::~Contact() {}

void	Contact::setFirstName(std::string firstName) { _firstName = firstName; }
void	Contact::setLastName(std::string lastName) { _lastName = lastName; }
void	Contact::setNickname(std::string nickname) { _nickname = nickname; }
void	Contact::setPhoneNumber(std::string phoneNumber) { _phoneNumber = phoneNumber; }
void	Contact::setDarkestSecret(std::string darkestSecret) { _darkestSecret = darkestSecret; }

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