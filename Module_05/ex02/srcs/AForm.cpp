/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 12:32:04 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/12 23:39:14 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AForm.hpp"

//---------------   Constructors & Destructors   ---------------//

AForm::AForm(const std::string name, const int sign_grade, const int exec_grade) : _name(name), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
	if (_sign_grade < 1 || _exec_grade < 1)
		throw GradeTooHighException();
	else if (_sign_grade > 150 || _exec_grade > 150)
		throw GradeTooLowException();
	_is_signed = false;
	std::cout << GREEN << "++ AForm default constructor called" << WHITE << std::endl;
}

AForm::~AForm()
{
	std::cout << RED << "-- AForm destructor called" << WHITE << std::endl;
}

AForm::AForm(const AForm &cpy) : _name(cpy._name), _sign_grade(cpy._sign_grade), _exec_grade(cpy._exec_grade)
{
	*this = cpy;
	std::cout << GREEN << "++ AForm copy constructor called" << WHITE << std::endl;
}

AForm	&AForm::operator=(const AForm &cpy)
{
	_is_signed = cpy._is_signed;
	std::cout << GREEN << "++ AForm copy assignment operator called" << WHITE << std::endl;
	return (*this);
}

//---------------   Display   ---------------//

std::ostream &operator<<(std::ostream &os, const AForm &f)
{
	os << f.getName() << ", sign grade: " << f.getSignGrade() << " , exec grade: " << f.getExecGrade() << " , is: ";
	f.getIsSigned() ? os << "Signed." : os << "Not Signed.";
	return (os);
}


//---------------   Exceptions   ---------------//

std::string	AForm::GradeTooHighException::tooHigh() const throw()
{
	return ("=> AForm grade is too high !");
}

std::string	AForm::GradeTooLowException::tooLow() const throw()
{
	return ("=> AForm grade is too low !");
}

std::string	AForm::NotSignedFormException::notSigned() const throw()
{
	return ("=> AForm is not signed !");
}


//---------------   Functions   ---------------//

std::string	AForm::getName() const { return (_name); }
bool		AForm::getIsSigned() const { return (_is_signed); }
int			AForm::getSignGrade() const { return (_sign_grade); }
int			AForm::getExecGrade() const { return (_exec_grade); }

void		AForm::beSigned(Bureaucrat &b)
{
	if (_sign_grade < b.getGrade())
		throw GradeTooLowException();
	if (!_is_signed)
		_is_signed = true;
}

 // update + color
bool		AForm::execute(Bureaucrat &b) const
{
	if (b.getGrade() > this->getExecGrade())
		throw GradeTooHighException();
	else if (!this->getIsSigned())
		throw NotSignedFormException();
	return (true);
}