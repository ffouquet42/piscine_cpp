/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 15:28:09 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/11 22:21:45 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"

int main(void)
{
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
		std::cout << C << std::endl;
		std::cout << YELLOW << "Test #004 : Bureaucrat <C> decrement grade" << WHITE << std::endl;
		C.decrementGrade();
		std::cout << C << std::endl;
		std::cout << YELLOW << "Test #005 : Bureaucrat <C> increment grade" << WHITE << std::endl;
		C.incrementGrade();
		std::cout << C << std::endl;
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
		std::cout << D << std::endl;
		std::cout << YELLOW << "Test #008 : Bureaucrat <D> increment grade" << WHITE << std::endl;
		D.incrementGrade();
		std::cout << D << std::endl;
		std::cout << YELLOW << "Test #009 : Bureaucrat <D> decrement grade" << WHITE << std::endl;
		D.decrementGrade();
		std::cout << D << std::endl;
		std::cout << YELLOW << "Test #010 : Bureaucrat <D> decrement grade" << WHITE << std::endl;
		D.decrementGrade();
	} catch(Bureaucrat::GradeTooHighException &e) {
		std::cout << MAGENTA << e.tooHigh() << WHITE << std::endl;
	} catch(Bureaucrat::GradeTooLowException &e) {
		std::cout << MAGENTA << e.tooLow() << WHITE << std::endl;
	}

	try {
		std::cout << YELLOW << "\nTest #011 : Create Bureaucrat <E> with grade <100>" << WHITE << std::endl;
		Bureaucrat E("E", 100);
		std::cout << E << std::endl;
		std::cout << YELLOW << "Test #012 : Create Bureaucrat <F> via copy of Bureaucrat <E>" << WHITE << std::endl;
		Bureaucrat F(E);
		std::cout << F << std::endl;
	} catch(Bureaucrat::GradeTooHighException &e) {
		std::cout << MAGENTA << e.tooHigh() << WHITE << std::endl;
	} catch(Bureaucrat::GradeTooLowException &e) {
		std::cout << MAGENTA << e.tooLow() << WHITE << std::endl;
	}

	try {
		std::cout << YELLOW << "\nTest #013 : Create AForm <A> with sign_grade <1> and exec_grade <0>" << WHITE << std::endl;
		AForm A("A", 1, 0);
	} catch(AForm::GradeTooHighException &e) {
		std::cout << MAGENTA << e.tooHigh() << WHITE << std::endl;
	} catch(AForm::GradeTooLowException &e) {
		std::cout << MAGENTA << e.tooLow() << WHITE << std::endl;
	}

	try {
		std::cout << YELLOW << "\nTest #014 : Create AForm <B> with sign_grade <0> and exec_grade <1>" << WHITE << std::endl;
		AForm B("B", 0, 1);
	} catch(AForm::GradeTooHighException &e) {
		std::cout << MAGENTA << e.tooHigh() << WHITE << std::endl;
	} catch(AForm::GradeTooLowException &e) {
		std::cout << MAGENTA << e.tooLow() << WHITE << std::endl;
	}

	try {
		std::cout << YELLOW << "\nTest #015 : Create AForm <C> with sign_grade <151> and exec_grade <150>" << WHITE << std::endl;
		AForm C("C", 151, 150);
	} catch(AForm::GradeTooHighException &e) {
		std::cout << MAGENTA << e.tooHigh() << WHITE << std::endl;
	} catch(AForm::GradeTooLowException &e) {
		std::cout << MAGENTA << e.tooLow() << WHITE << std::endl;
	}

	try {
		std::cout << YELLOW << "\nTest #016 : Create AForm <D> with sign_grade <150> and exec_grade <151>" << WHITE << std::endl;
		AForm D("D", 150, 151);
	} catch(AForm::GradeTooHighException &e) {
		std::cout << MAGENTA << e.tooHigh() << WHITE << std::endl;
	} catch(AForm::GradeTooLowException &e) {
		std::cout << MAGENTA << e.tooLow() << WHITE << std::endl;
	}

	try {
		std::cout << YELLOW << "\nTest #017 : Create AForm <E> with sign_grade <1> and exec_grade <1>" << WHITE << std::endl;
		AForm E("E", 1, 1);
		std::cout << E << std::endl;
		std::cout << YELLOW << "Test #018 : Create AForm <F> via copy of AForm <E>" << WHITE << std::endl;
		AForm F(E);
		std::cout << F << std::endl;
		std::cout << YELLOW << "Test #019 : Create Bureaucrat <G> with grade <10>" << WHITE << std::endl;
		Bureaucrat G("G", 10);
		std::cout << G << std::endl;
		std::cout << YELLOW << "Test #020 : Create AForm <H> with sign_grade <50> and exec_grade <50>" << WHITE << std::endl;
		AForm H("H", 50, 50);
		std::cout << H << std::endl;
		std::cout << YELLOW << "Test #021 : Bureaucrat <G> try to sign AForm <H>" << WHITE << std::endl;
		G.signForm(H);
		std::cout << H << std::endl;
		std::cout << YELLOW << "Test #022 : Bureaucrat <G> try to sign AForm <E>" << WHITE << std::endl;
		std::cout << E << std::endl;
		G.signForm(E);
	} catch(AForm::GradeTooHighException &e) {
		std::cout << MAGENTA << e.tooHigh() << WHITE << std::endl;
	} catch(AForm::GradeTooLowException &e) {
		std::cout << MAGENTA << e.tooLow() << WHITE << std::endl;
	}

	try {
		std::cout << YELLOW << "\nTest #023 : Create Bureaucrat <I> with grade <100>" << WHITE << std::endl;
		Bureaucrat I("I", 100);
		std::cout << I << std::endl;
		std::cout << YELLOW << "Test #024 : Create AForm <J> with sign_grade <99> and exec_grade <99>" << WHITE << std::endl;
		AForm J("J", 99, 99);
		std::cout << J << std::endl;
		std::cout << YELLOW << "Test #025 : Bureaucrat <I> try to sign AForm <J>" << WHITE << std::endl;
		I.signForm(J);
		std::cout << J << std::endl;
		std::cout << YELLOW << "Test #026 : Bureaucrat <I> increment grade" << WHITE << std::endl;
		I.incrementGrade();
		std::cout << I << std::endl;
		std::cout << YELLOW << "Test #027 : Bureaucrat <I> try to sign AForm <J>" << WHITE << std::endl;
		I.signForm(J);
		std::cout << J << std::endl;
	} catch(AForm::GradeTooHighException &e) {
		std::cout << MAGENTA << e.tooHigh() << WHITE << std::endl;
	} catch(AForm::GradeTooLowException &e) {
		std::cout << MAGENTA << e.tooLow() << WHITE << std::endl;
	}

	//---------------   New Tests   ---------------//
	std::cout << YELLOW << "\n\n===== NEW TESTS =====" << WHITE << std::endl;
	
	return (0);
}