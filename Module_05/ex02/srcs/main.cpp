/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 15:28:09 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/12 23:41:47 by fllanet          ###   ########.fr       */
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

	
	
	return (0);
}