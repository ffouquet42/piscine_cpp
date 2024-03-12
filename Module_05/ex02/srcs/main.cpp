/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 15:28:09 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/12 23:56:57 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

int main(void)
{
	try {
		std::cout << YELLOW << "\nTest #001 : Create ShrubberyCreationForm <A>" << WHITE << std::endl;
		ShrubberyCreationForm A("A");
		std::cout << A << std::endl;
		
		std::cout << YELLOW << "Test #002 : Create Bureaucrat <B> with grade <150>" << WHITE << std::endl;
		Bureaucrat B("B", 150);
		std::cout << B << std::endl;
		
		std::cout << YELLOW << "Test #003 : Create Bureaucrat <C> with grade <145>" << WHITE << std::endl;
		Bureaucrat C("C", 145);
		std::cout << C << std::endl;
		
		std::cout << YELLOW << "Test #004 : Create Bureaucrat <D> with grade <137>" << WHITE << std::endl;
		Bureaucrat D("D", 137);
		std::cout << D << std::endl;

		std::cout << YELLOW << "Test #005 : Bureaucrat <D> try to execute Form <A>" << WHITE << std::endl;
		std::cout << D << std::endl;
		std::cout << A << std::endl;
		D.executeForm(A);

		std::cout << YELLOW << "Test #006 : Bureaucrat <B> try to sign Form <A>" << WHITE << std::endl;
		std::cout << B << std::endl;
		std::cout << A << std::endl;
		B.signForm(A);
		std::cout << A << std::endl;

		std::cout << YELLOW << "Test #007 : Bureaucrat <C> try to sign Form <A>" << WHITE << std::endl;
		std::cout << C << std::endl;
		std::cout << A << std::endl;
		C.signForm(A);
		std::cout << A << std::endl;

		std::cout << YELLOW << "Test #008 : Bureaucrat <C> try to execute Form <A>" << WHITE << std::endl;
		std::cout << C << std::endl;
		std::cout << A << std::endl;
		C.executeForm(A);

		std::cout << YELLOW << "Test #009 : Bureaucrat <D> try to execute Form <A>" << WHITE << std::endl;
		std::cout << D << std::endl;
		std::cout << A << std::endl;
		D.executeForm(A);
	} catch(Bureaucrat::GradeTooHighException &e) {
		std::cout << MAGENTA << e.tooHigh() << WHITE << std::endl;
	} catch(Bureaucrat::GradeTooLowException &e) {
		std::cout << MAGENTA << e.tooLow() << WHITE << std::endl;
	}

	try {
		std::cout << YELLOW << "\nTest #010 : Create RobotomyRequestForm <A>" << WHITE << std::endl;
		RobotomyRequestForm A("A");
		std::cout << A << std::endl;
		
		std::cout << YELLOW << "Test #011 : Create Bureaucrat <B> with grade <150>" << WHITE << std::endl;
		Bureaucrat B("B", 150);
		std::cout << B << std::endl;
		
		std::cout << YELLOW << "Test #012 : Create Bureaucrat <C> with grade <72>" << WHITE << std::endl;
		Bureaucrat C("C", 72);
		std::cout << C << std::endl;
		
		std::cout << YELLOW << "Test #013 : Create Bureaucrat <D> with grade <45>" << WHITE << std::endl;
		Bureaucrat D("D", 45);
		std::cout << D << std::endl;

		std::cout << YELLOW << "Test #014 : Bureaucrat <D> try to execute Form <A>" << WHITE << std::endl;
		std::cout << D << std::endl;
		std::cout << A << std::endl;
		D.executeForm(A);

		std::cout << YELLOW << "Test #015 : Bureaucrat <B> try to sign Form <A>" << WHITE << std::endl;
		std::cout << B << std::endl;
		std::cout << A << std::endl;
		B.signForm(A);
		std::cout << A << std::endl;

		std::cout << YELLOW << "Test #016 : Bureaucrat <C> try to sign Form <A>" << WHITE << std::endl;
		std::cout << C << std::endl;
		std::cout << A << std::endl;
		C.signForm(A);
		std::cout << A << std::endl;

		std::cout << YELLOW << "Test #017 : Bureaucrat <C> try to execute Form <A>" << WHITE << std::endl;
		std::cout << C << std::endl;
		std::cout << A << std::endl;
		C.executeForm(A);

		std::cout << YELLOW << "Test #018 : Bureaucrat <D> try to execute Form <A>" << WHITE << std::endl;
		std::cout << D << std::endl;
		std::cout << A << std::endl;
		D.executeForm(A);
	} catch(Bureaucrat::GradeTooHighException &e) {
		std::cout << MAGENTA << e.tooHigh() << WHITE << std::endl;
	} catch(Bureaucrat::GradeTooLowException &e) {
		std::cout << MAGENTA << e.tooLow() << WHITE << std::endl;
	}

	try {
		std::cout << YELLOW << "\nTest #019 : Create PresidentialPardonForm <A>" << WHITE << std::endl;
		PresidentialPardonForm A("A");
		std::cout << A << std::endl;
		
		std::cout << YELLOW << "Test #020 : Create Bureaucrat <B> with grade <150>" << WHITE << std::endl;
		Bureaucrat B("B", 150);
		std::cout << B << std::endl;
		
		std::cout << YELLOW << "Test #021 : Create Bureaucrat <C> with grade <25>" << WHITE << std::endl;
		Bureaucrat C("C", 25);
		std::cout << C << std::endl;
		
		std::cout << YELLOW << "Test #022 : Create Bureaucrat <D> with grade <5>" << WHITE << std::endl;
		Bureaucrat D("D", 5);
		std::cout << D << std::endl;

		std::cout << YELLOW << "Test #023 : Bureaucrat <D> try to execute Form <A>" << WHITE << std::endl;
		std::cout << D << std::endl;
		std::cout << A << std::endl;
		D.executeForm(A);

		std::cout << YELLOW << "Test #024 : Bureaucrat <B> try to sign Form <A>" << WHITE << std::endl;
		std::cout << B << std::endl;
		std::cout << A << std::endl;
		B.signForm(A);
		std::cout << A << std::endl;

		std::cout << YELLOW << "Test #025 : Bureaucrat <C> try to sign Form <A>" << WHITE << std::endl;
		std::cout << C << std::endl;
		std::cout << A << std::endl;
		C.signForm(A);
		std::cout << A << std::endl;

		std::cout << YELLOW << "Test #026 : Bureaucrat <C> try to execute Form <A>" << WHITE << std::endl;
		std::cout << C << std::endl;
		std::cout << A << std::endl;
		C.executeForm(A);

		std::cout << YELLOW << "Test #027 : Bureaucrat <D> try to execute Form <A>" << WHITE << std::endl;
		std::cout << D << std::endl;
		std::cout << A << std::endl;
		D.executeForm(A);
	} catch(Bureaucrat::GradeTooHighException &e) {
		std::cout << MAGENTA << e.tooHigh() << WHITE << std::endl;
	} catch(Bureaucrat::GradeTooLowException &e) {
		std::cout << MAGENTA << e.tooLow() << WHITE << std::endl;
	}
	
	return (0);
}