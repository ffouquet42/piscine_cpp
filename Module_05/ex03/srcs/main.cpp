/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 15:28:09 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/13 02:44:11 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/Intern.hpp"

int main(void)
{
	try {
		std::cout << YELLOW << "\nTest #001 : Create Intern" << WHITE << std::endl;
		Intern intern;
		
		// Form alone ?  construcor empty? AForm() ? check mains
		// std::cout << YELLOW << "Test #002 : Create empty Form" << WHITE << std::endl;
		// Form *rrf;
		
		std::cout << YELLOW << "Test #003 : Intern make form <shrubbery creation>" << WHITE << std::endl;
		intern.makeForm("shrubbery creation", "forest");
		
	} catch(Bureaucrat::GradeTooHighException &e) {
		std::cout << MAGENTA << e.tooHigh() << WHITE << std::endl;
	} catch(Bureaucrat::GradeTooLowException &e) {
		std::cout << MAGENTA << e.tooLow() << WHITE << std::endl;
	}

	return (0);
}