/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 00:35:21 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/18 17:52:15 by fllanet          ###   ########.fr       */
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
	(void)cpy;
	std::cout << GREEN << "++ Intern copy assignment operator called" << WHITE << std::endl;
	return (*this);
}


//---------------   Functions   ---------------//

AForm	*newShrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm	*newRobotomy(std::string target)
{
	return (new RobotomyRequestForm(target));
}

AForm	*newPresidential(std::string target)
{
	return (new PresidentialPardonForm(target));
}

AForm	*Intern::makeForm(std::string name, std::string target)
{
	AForm *new_form = NULL;
	AForm *(*f[3])(std::string target) = { &newShrubbery, &newRobotomy, &newPresidential };
	std::string form_list[3] = { "shrubbery creation", "robotomy request", "presidential pardon" };
	int id = -1;
	
	for (int i = 0; i < 3; i++)
		if (form_list[i] == name)
			id = i;
	if (id == -1)
		return (std::cout << RED << "Invalid name" << WHITE << std::endl, new_form);
	return (std::cout << BLUE << "Intern creates " << form_list[id] << WHITE << std::endl, f[id](target));
}