/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 15:28:09 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/06 12:59:29 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

int main(void) // Ajouter valeur de retour + valeur attendue retournee
{
	// test creer Bureaucrat sans name ou grade + copy ect
	
	try {
		std::cout << YELLOW << "\nTest #001 : Create Bureaucrat <A> with grade <0>" << WHITE << std::endl;
		Bureaucrat A("A", 0);
	} catch(Bureaucrat::GradeTooHighException &e) {
		std::cout << MAGENTA << e.tooHigh() << WHITE << std::endl;
	} catch(Bureaucrat::GradeTooLowException &e) {
		std::cout << MAGENTA << e.tooLow() << WHITE << std::endl;
	}
	
	try {
		std::cout << YELLOW << "\nTest #002 : Create Bureaucrat <B> with grade <151>" << WHITE << std::endl;
		Bureaucrat B("B", 151);
	} catch(Bureaucrat::GradeTooHighException &e) {
		std::cout << MAGENTA << e.tooHigh() << WHITE << std::endl;
	} catch(Bureaucrat::GradeTooLowException &e) {
		std::cout << MAGENTA << e.tooLow() << WHITE << std::endl;
	}

	try {
		std::cout << YELLOW << "\nTest #003 : Create Bureaucrat <C> with grade <1>" << WHITE << std::endl;
		Bureaucrat C("C", 1);
		C.getStatus(C.getName(), C.getGrade());
		std::cout << YELLOW << "Test #004 : Bureaucrat <C> decrement grade" << WHITE << std::endl;
		C.decrementGrade();
		C.getStatus(C.getName(), C.getGrade());
		std::cout << YELLOW << "Test #005 : Bureaucrat <C> increment grade" << WHITE << std::endl;
		C.incrementGrade();
		C.getStatus(C.getName(), C.getGrade());
		std::cout << YELLOW << "Test #006 : Bureaucrat <C> increment grade" << WHITE << std::endl;
		C.incrementGrade();
	} catch(Bureaucrat::GradeTooHighException &e) {
		std::cout << MAGENTA << e.tooHigh() << WHITE << std::endl;
	} catch(Bureaucrat::GradeTooLowException &e) {
		std::cout << MAGENTA << e.tooLow() << WHITE << std::endl;
	}

	try {
		std::cout << YELLOW << "\nTest #007 : Create Bureaucrat <D> with grade <150>" << WHITE << std::endl;
		Bureaucrat D("D", 150);
		D.getStatus(D.getName(), D.getGrade());
		std::cout << YELLOW << "Test #008 : Bureaucrat <D> increment grade" << WHITE << std::endl;
		D.incrementGrade();
		D.getStatus(D.getName(), D.getGrade());
		std::cout << YELLOW << "Test #009 : Bureaucrat <D> decrement grade" << WHITE << std::endl;
		D.decrementGrade();
		D.getStatus(D.getName(), D.getGrade());
		std::cout << YELLOW << "Test #010 : Bureaucrat <D> decrement grade" << WHITE << std::endl;
		D.decrementGrade();
	} catch(Bureaucrat::GradeTooHighException &e) {
		std::cout << MAGENTA << e.tooHigh() << WHITE << std::endl;
	} catch(Bureaucrat::GradeTooLowException &e) {
		std::cout << MAGENTA << e.tooLow() << WHITE << std::endl;
	}

	return (0);
}