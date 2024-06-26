/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 21:23:55 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/13 00:01:15 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PresidentialPardonForm.hpp"

//---------------   Constructors & Destructors   ---------------//

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialForm", 25, 5), _target(target)
{
	std::cout << GREEN << "++ PresidentialPardonForm default constructor called" << WHITE << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << RED << "-- PresidentialPardonForm destructor called" << WHITE << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cpy) : AForm("RobotomyForm", 25, 5), _target(cpy._target)
{
	std::cout << GREEN << "++ PresidentialPardonForm copy constructor called" << WHITE << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &cpy)
{
	if (this != &cpy)
		_target = cpy._target;
	std::cout << GREEN << "++ PresidentialPardonForm copy assignment operator called" << WHITE << std::endl;
	return (*this);
}


//---------------   Functions   ---------------//

bool	PresidentialPardonForm::execute(Bureaucrat &b) const
{
	try {
		AForm::execute(b);

		std::cout << CYAN << _target << " has been pardoned by Zaphod Beeblebrox." << WHITE << std::endl;
		
		return (true);
	} catch(AForm::GradeTooHighException &e) {
		std::cout << MAGENTA << e.tooHigh() << WHITE << std::endl;
	} catch(AForm::NotSignedFormException &e) {
		std::cout << MAGENTA << e.notSigned() << WHITE << std::endl;
	}
	return (false);
}