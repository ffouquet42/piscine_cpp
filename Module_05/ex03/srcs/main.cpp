/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 15:28:09 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/14 23:05:37 by fllanet          ###   ########.fr       */
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
		
		std::cout << YELLOW << "Test #002 : Create Bureaucrat <A> with grade <1>" << WHITE << std::endl;
		Bureaucrat A("A", 1);
		std::cout << A << std::endl;
	
		std::cout << YELLOW << "\nTest #003 : Intern make form <shrubbery creation>" << WHITE << std::endl;
		AForm *F = intern.makeForm("shrubbery creation", "forest");
		
		std::cout << YELLOW << "Test #004 : Bureaucrat <A> sign form create by the Intern" << WHITE << std::endl;
		std::cout << *F << std::endl;
		A.signForm(*F);
		std::cout << *F << std::endl;

		std::cout << YELLOW << "Test #005 : Bureaucrat <A> execute form create by the Intern" << WHITE << std::endl;
		A.executeForm(*F);

		delete F;
		
		std::cout << YELLOW << "\nTest #006 : Intern make form <robotomy request>" << WHITE << std::endl;
		AForm *G = intern.makeForm("robotomy request", "robot");

		std::cout << YELLOW << "Test #007 : Bureaucrat <A> sign form create by the Intern" << WHITE << std::endl;
		std::cout << *G << std::endl;
		A.signForm(*G);
		std::cout << *G << std::endl;

		std::cout << YELLOW << "Test #008 : Bureaucrat <A> execute form create by the Intern" << WHITE << std::endl;
		A.executeForm(*G);

		delete G;

		std::cout << YELLOW << "\nTest #009 : Intern make form <presidential pardon>" << WHITE << std::endl;
		AForm *H = intern.makeForm("presidential pardon", "pardon");

		std::cout << YELLOW << "Test #010 : Bureaucrat <A> sign form create by the Intern" << WHITE << std::endl;
		std::cout << *H << std::endl;
		A.signForm(*H);
		std::cout << *H << std::endl;

		std::cout << YELLOW << "Test #011 : Bureaucrat <A> execute form create by the Intern" << WHITE << std::endl;
		A.executeForm(*H);

		delete H;
		
	} catch(Bureaucrat::GradeTooHighException &e) {
		std::cout << MAGENTA << e.tooHigh() << WHITE << std::endl;
	} catch(Bureaucrat::GradeTooLowException &e) {
		std::cout << MAGENTA << e.tooLow() << WHITE << std::endl;
	}

	return (0);
}