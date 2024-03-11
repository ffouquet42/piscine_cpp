/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 15:28:09 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/08 11:36:21 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/Form.hpp"

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


	//---------------   New Tests   ---------------//
	std::cout << YELLOW << "\n\n===== NEW TESTS =====" << WHITE << std::endl;

	try {
		std::cout << YELLOW << "\nTest #013 : Create Form <A> with sign_grade <1> and exec_grade <0>" << WHITE << std::endl;
		Form A("A", 1, 0);
	} catch(Form::GradeTooHighException &e) {
		std::cout << MAGENTA << e.tooHigh() << WHITE << std::endl;
	} catch(Form::GradeTooLowException &e) {
		std::cout << MAGENTA << e.tooLow() << WHITE << std::endl;
	}

	try {
		std::cout << YELLOW << "\nTest #014 : Create Form <B> with sign_grade <0> and exec_grade <1>" << WHITE << std::endl;
		Form B("B", 0, 1);
	} catch(Form::GradeTooHighException &e) {
		std::cout << MAGENTA << e.tooHigh() << WHITE << std::endl;
	} catch(Form::GradeTooLowException &e) {
		std::cout << MAGENTA << e.tooLow() << WHITE << std::endl;
	}

	try {
		std::cout << YELLOW << "\nTest #015 : Create Form <C> with sign_grade <151> and exec_grade <150>" << WHITE << std::endl;
		Form C("C", 151, 150);
	} catch(Form::GradeTooHighException &e) {
		std::cout << MAGENTA << e.tooHigh() << WHITE << std::endl;
	} catch(Form::GradeTooLowException &e) {
		std::cout << MAGENTA << e.tooLow() << WHITE << std::endl;
	}

	try {
		std::cout << YELLOW << "\nTest #016 : Create Form <D> with sign_grade <150> and exec_grade <151>" << WHITE << std::endl;
		Form D("D", 150, 151);
	} catch(Form::GradeTooHighException &e) {
		std::cout << MAGENTA << e.tooHigh() << WHITE << std::endl;
	} catch(Form::GradeTooLowException &e) {
		std::cout << MAGENTA << e.tooLow() << WHITE << std::endl;
	}

	try {
		std::cout << YELLOW << "\nTest #017 : Create Form <E> with sign_grade <1> and exec_grade <1>" << WHITE << std::endl;
		Form E("E", 1, 1);
		std::cout << E << std::endl;
		std::cout << YELLOW << "Test #018 : Create Form <F> via copy of Form <E>" << WHITE << std::endl;
		Form F(E);
		std::cout << F << std::endl;
		std::cout << YELLOW << "Test #019 : Create Bureaucrat <G> with grade <10>" << WHITE << std::endl;
		Bureaucrat G("G", 10);
		std::cout << G << std::endl;
		std::cout << YELLOW << "Test #020 : Create Form <H> with sign_grade <50> and exec_grade <50>" << WHITE << std::endl;
		Form H("H", 50, 50);
		std::cout << H << std::endl;
		std::cout << YELLOW << "Test #021 : Bureaucrat <G> try to sign Form <H>" << WHITE << std::endl;
		G.signForm(H);
		std::cout << H << std::endl;
		std::cout << YELLOW << "Test #022 : Bureaucrat <G> try to sign Form <E>" << WHITE << std::endl;
		std::cout << E << std::endl;
		G.signForm(E);
	} catch(Form::GradeTooHighException &e) {
		std::cout << MAGENTA << e.tooHigh() << WHITE << std::endl;
	} catch(Form::GradeTooLowException &e) {
		std::cout << MAGENTA << e.tooLow() << WHITE << std::endl;
	}

	try {
		std::cout << YELLOW << "\nTest #023 : Create Bureaucrat <I> with grade <100>" << WHITE << std::endl;
		Bureaucrat I("I", 100);
		std::cout << I << std::endl;
		std::cout << YELLOW << "Test #024 : Create Form <J> with sign_grade <99> and exec_grade <99>" << WHITE << std::endl;
		Form J("J", 99, 99);
		std::cout << J << std::endl;
		std::cout << YELLOW << "Test #025 : Bureaucrat <I> try to sign Form <J>" << WHITE << std::endl;
		I.signForm(J);
		std::cout << J << std::endl;
		std::cout << YELLOW << "Test #026 : Bureaucrat <I> increment grade" << WHITE << std::endl;
		I.incrementGrade();
		std::cout << I << std::endl;
		std::cout << YELLOW << "Test #027 : Bureaucrat <I> try to sign Form <J>" << WHITE << std::endl;
		I.signForm(J);
		std::cout << J << std::endl;
	} catch(Form::GradeTooHighException &e) {
		std::cout << MAGENTA << e.tooHigh() << WHITE << std::endl;
	} catch(Form::GradeTooLowException &e) {
		std::cout << MAGENTA << e.tooLow() << WHITE << std::endl;
	}
	
	return (0);
}