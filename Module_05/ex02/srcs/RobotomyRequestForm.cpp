/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 21:23:50 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/12 00:25:18 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RobotomyRequestForm.hpp"

//---------------   Constructors & Destructors   ---------------//

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyForm", 72, 45), _target(target)
{
	std::cout << GREEN << "++ RobotomyRequestForm default constructor called" << WHITE << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << RED << "-- RobotomyRequestForm destructor called" << WHITE << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cpy) : AForm("RobotomyForm", 72, 45), _target(cpy._target)
{
	std::cout << GREEN << "++ RobotomyRequestForm copy constructor called" << WHITE << std::endl;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &cpy)
{
	if (this != &cpy)
		_target = cpy._target;
	std::cout << GREEN << "++ RobotomyRequestForm copy assignment operator called" << WHITE << std::endl;
	return (*this);
}


//---------------   Functions   ---------------//

// test all possibilty in main and update disposition
bool	RobotomyRequestForm::execute(Bureaucrat &b) const
{
	try {
		AForm::execute(b); // at start?

		std::srand(std::time(NULL));
		int rand = std::rand(); // range 0-1 ?
		
		std::cout << "VroumVroum" << std::endl; // update + color
		if (rand)
			std::cout << "success" << std::endl; // update + color
		else
			std::cout << "fail" << std::endl; // update + color
		
		return (true);
	} catch(AForm::GradeTooHighException &e) {
		std::cout << MAGENTA << e.tooHigh() << WHITE << std::endl;
	} catch(AForm::NotSignedFormException &e) {
		std::cout << MAGENTA << e.notSigned() << WHITE << std::endl;
	}
	return (false);
}