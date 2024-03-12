/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 21:23:50 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/13 00:29:46 by fllanet          ###   ########.fr       */
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

bool	RobotomyRequestForm::execute(Bureaucrat &b) const
{
	try {
		AForm::execute(b);

		std::srand(std::time(NULL));
		int rand = std::rand();
		
		std::cout << CYAN << "*drilling noise*" << WHITE << std::endl;
		if (rand % 2 == 0)
			std::cout << CYAN << _target << " has been robotomized successfully." << WHITE << std::endl;
		else
			std::cout << CYAN << "Robotomy failed." << WHITE << std::endl;
		
		return (true);
	} catch(AForm::GradeTooHighException &e) {
		std::cout << MAGENTA << e.tooHigh() << WHITE << std::endl;
	} catch(AForm::NotSignedFormException &e) {
		std::cout << MAGENTA << e.notSigned() << WHITE << std::endl;
	}
	return (false);
}