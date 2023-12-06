/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:28:20 by fllanet           #+#    #+#             */
/*   Updated: 2023/12/06 12:45:05 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Contact.hpp"

Contact::Contact() {}
Contact::~Contact() {}

// public

void	Contact::createNewContact()
{
	std::string user_firstname;
	std::string user_lastname;
	std::string user_nickname;
	std::string user_phonenumber;
	std::string user_darkestsecret;
	
	std::cout << MAGENTA << "Create a new contact !" << WHITE << std::endl;

	while (user_firstname.empty())
	{
		std::cout << CYAN << "First name > " << WHITE;
		std::getline(std::cin, user_firstname);
		setFirstName(user_firstname);
	}

	while (user_lastname.empty())
	{
		std::cout << CYAN << "Last name > " << WHITE;
		std::getline(std::cin, user_lastname);
		setLastName(user_lastname);
	}
	
	while (user_nickname.empty())
	{
		std::cout << CYAN << "Nickname > " << WHITE;
		std::getline(std::cin, user_nickname);
		setNickname(user_nickname);
	}
	
	while (user_phonenumber.empty())
	{
		std::cout << CYAN << "Phone number > " << WHITE;
		std::getline(std::cin, user_phonenumber);
		setPhoneNumber(user_phonenumber);
	}
	
	while (user_darkestsecret.empty())
	{
		std::cout << CYAN << "Darkest secret > " << WHITE;
		std::getline(std::cin, user_darkestsecret);
		setDarkestSecret(user_darkestsecret);
	}
}

std::string	cutSizeMax(std::string str)
{
	return (str.length() > 10) ? str.substr(0, 9) + "." : str;
}

void	Contact::showMinInfos()
{
	std::cout << YELLOW << std::setw(10) << cutSizeMax(_firstName) << "|";
	std::cout << YELLOW << std::setw(10) << cutSizeMax(_lastName) << "|";
	std::cout << YELLOW << std::setw(10) << cutSizeMax(_nickname) << "|" << WHITE << std::endl;
}

void	Contact::showFullInfos(int index)
{
	std::cout << YELLOW << "index : " << index << std::endl;
	std::cout << "first name : " << _firstName << std::endl;
	std::cout << "last name : " << _lastName << std::endl;
	std::cout << "nickname : " << _nickname << std::endl;
	std::cout << "phone number : " << _phoneNumber << std::endl;
	std::cout << "darkest secret : " << _darkestSecret << WHITE << std::endl;
}

// private

void	Contact::setFirstName(std::string firstName) { _firstName = firstName; }
void	Contact::setLastName(std::string lastName) { _lastName = lastName; }
void	Contact::setNickname(std::string nickname) { _nickname = nickname; }
void	Contact::setPhoneNumber(std::string phoneNumber) { _phoneNumber = phoneNumber; }
void	Contact::setDarkestSecret(std::string darkestSecret) { _darkestSecret = darkestSecret; }