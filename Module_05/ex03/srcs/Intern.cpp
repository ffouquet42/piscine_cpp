/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 00:35:21 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/13 00:44:12 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Intern.hpp"

//---------------   Constructors & Destructors   ---------------//

Intern::Intern()
{
	std::cout << GREEN << "++ Intern default constructor called" << WHITE << std::endl;
}

Intern::~Intern()
{
	std::cout << RED << "-- Intern destructor called" << WHITE << std::endl;
}

Intern::Intern(const Intern &cpy)
{
	*this = cpy;
	std::cout << GREEN << "++ Intern copy constructor called" << WHITE << std::endl;
}

Intern	&Intern::operator=(const Intern &cpy)
{
	std::cout << GREEN << "++ Intern copy assignment operator called" << WHITE << std::endl;
	return (*this);
}


//---------------   Functions   ---------------//

AForm	*Intern::makeForm(std::string formName, std::string formTarget)
{
	
}