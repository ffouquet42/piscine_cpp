/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 12:32:04 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/07 14:21:47 by fllanet          ###   ########.fr       */
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

Form::Form(const Form &cpy) : _name(cpy._name), _sign_grade(cpy._sign_grade), _exec_grade(cpy._exec_grade)
{
	*this = cpy;
	std::cout << GREEN << "++ Form copy constructor called" << WHITE << std::endl;
}

Form	&Form::operator=(const Form &cpy)
{
	_is_signed = cpy._is_signed;
	std::cout << GREEN << "++ Form copy assignment operator called" << WHITE << std::endl;
	return (*this);
}

//---------------   Display   ---------------//

std::ostream &operator<<(std::ostream &os, const Form &f)
{
	os << "Form " << f.getName() << ", sign grade: " << f.getSignGrade() << " , exec grade: " << f.getExecGrade() << " , is: ";
	f.getIsSigned() ? os << "Signed." : os << "Not Signed.";
	return (os);
}


//---------------   Exceptions   ---------------//

std::string	Form::GradeTooHighException::tooHigh() const throw()
{
	return ("=> Form grade is too high !");
}

std::string	Form::GradeTooLowException::tooLow() const throw()
{
	return ("=> Form grade is too low !");
}


//---------------   Functions   ---------------//

std::string	Form::getName() const { return (_name); }
bool		Form::getIsSigned() const { return (_is_signed); }
int			Form::getSignGrade() const { return (_sign_grade); }
int			Form::getExecGrade() const { return (_exec_grade); }

void		Form::beSigned(Bureaucrat &b)
{
	if (_sign_grade < b.getGrade())
		throw GradeTooLowException(); // bon msg?
	if (!_is_signed)
	{
		_is_signed = true;
		std::cout << BLUE << "Form <" << _name << "> has been signed by <" << b.getName() << ">" << WHITE << std::endl; // bon msg? (signForm()?)
	}
}