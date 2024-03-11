/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 21:23:47 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/12 00:24:53 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ShrubberyCreationForm.hpp"

//---------------   Constructors & Destructors   ---------------//

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyForm", 145, 137), _target(target)
{
	std::cout << GREEN << "++ ShrubberyCreationForm default constructor called" << WHITE << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << RED << "-- ShrubberyCreationForm destructor called" << WHITE << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cpy) : AForm("ShrubberyForm", 145, 137), _target(cpy._target)
{
	std::cout << GREEN << "++ ShrubberyCreationForm copy constructor called" << WHITE << std::endl;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &cpy)
{
	if (this != &cpy)
		_target = cpy._target;
	std::cout << GREEN << "++ ShrubberyCreationForm copy assignment operator called" << WHITE << std::endl;
	return (*this);
}


//---------------   Functions   ---------------//

// test all possibilty in main and update disposition
bool	ShrubberyCreationForm::execute(Bureaucrat &b) const
{
	try {
		AForm::execute(b); // at start?

		std::ofstream outFile((_target + "_shrubbery").c_str()); // outFile=>out

		// color ?
		outFile << "       /\\" << std::endl;
		outFile << "      /\\/\\" << std::endl;
		outFile << "     /\\/\\/\\" << std::endl;
		outFile << "    /\\/\\/\\/\\" << std::endl;
		outFile << "   /\\/\\/\\/\\/\\" << std::endl;
		outFile << "  /\\/\\/\\/\\/\\/\\" << std::endl;
		outFile << " /\\/\\/\\/\\/\\/\\/\\" << std::endl;
		outFile << "/\\/\\/\\/\\/\\/\\/\\/\\" << std::endl;
		outFile << "/\\/\\/\\/\\/\\/\\/\\/\\/\\" << std::endl;
		outFile << "------------------" << std::endl;
		outFile << "        ||" << std::endl;
		outFile << "        ||" << std::endl;
		outFile << "        ||" << std::endl;

		return (true);
	} catch(AForm::GradeTooHighException &e) {
		std::cout << MAGENTA << e.tooHigh() << WHITE << std::endl;
	} catch(AForm::NotSignedFormException &e) {
		std::cout << MAGENTA << e.notSigned() << WHITE << std::endl;
	}
	return (false);
}