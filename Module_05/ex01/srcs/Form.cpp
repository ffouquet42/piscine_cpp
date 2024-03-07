/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 12:32:04 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/07 13:35:29 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Form.hpp"

//---------------   Constructors & Destructors   ---------------//

Form::Form(const std::string name, const int sign_grade, const int exec_grade) : _name(name), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
	if (_sign_grade < 1 || _exec_grade < 1)
		throw GradeTooHighException();
	else if (_sign_grade > 150 || _exec_grade > 150)
		throw GradeTooLowException();
	_is_signed = false;
	std::cout << GREEN << "++ Form default constructor called" << WHITE << std::endl;
}

Form::~Form()
{
	std::cout << RED << "-- Form destructor called" << WHITE << std::endl;
}


//---------------   Display   ---------------//

std::ostream &operator<<(std::ostream &os, const Form &cpy)
{
	os << "Form " << cpy.getName() << ", sign grade: " << cpy.getSignGrade() << " , exec grade: " << cpy.getExecGrade() << " , is: ";
	cpy.getIsSigned() ? os << "Signed." : os << "Not Signed.";
	return (os);
}


//---------------   Exceptions   ---------------//

std::string	Form::GradeTooHighException::tooHigh() const throw()
{
	return ("=> Form grade is too high ! (grade max: 1)");
}

std::string	Form::GradeTooLowException::tooLow() const throw()
{
	return ("=> Form grade is too low ! (grade min: 150)");
}


//---------------   Functions   ---------------//

std::string	Form::getName() const { return (_name); }
bool		Form::getIsSigned() const { return (_is_signed); }
int			Form::getSignGrade() const { return (_sign_grade); }
int			Form::getExecGrade() const { return (_exec_grade); }