/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 17:28:20 by fllanet           #+#    #+#             */
/*   Updated: 2023/10/04 18:20:13 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/program.hpp"

Contact::Contact() {}
Contact::~Contact() {}

void Contact::createNewContact()
{
	std::string user_input;
	
	std::cout << MAGENTA << "Create a new contact !" << WHITE << std::endl;

	std::cout << CYAN << "First name > " << WHITE;
	std::cin >> user_input;
	// set

	std::cout << CYAN << "Last name > " << WHITE;
	std::cin >> user_input;
	// set

	std::cout << CYAN << "Nickname > " << WHITE;
	std::cin >> user_input;
	// set

	std::cout << CYAN << "Phone number > " << WHITE;
	std::cin >> user_input;
	// set

	std::cout << CYAN << "Darkest secret > " << WHITE;
	std::cin >> user_input;
	// set

}