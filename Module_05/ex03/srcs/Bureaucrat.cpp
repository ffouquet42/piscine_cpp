/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 15:28:12 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/13 00:15:37 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

//---------------   Constructors & Destructors   ---------------//

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
	std::cout << GREEN << "++ Bureaucrat default constructor called" << WHITE << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << RED << "-- Bureaucrat destructor called" << WHITE << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy) : _name(cpy._name)
{
	*this = cpy;
	std::cout << GREEN << "++ Bureaucrat copy constructor called" << WHITE << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &cpy)
{
	_grade = cpy._grade;
	std::cout << GREEN << "++ Bureaucrat copy assignment operator called" << WHITE << std::endl;
	return (*this);
}


//---------------   Display   ---------------//

std::ostream &operator<<(std::ostream &os, const Bureaucrat &b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
	return (os);
}


//---------------   Exceptions   ---------------//

std::string	Bureaucrat::GradeTooHighException::tooHigh() const throw()
{
	return ("=> Bureaucrat grade is too high ! (grade max: 1)");
}

std::string	Bureaucrat::GradeTooLowException::tooLow() const throw()
{
	return ("=> Bureaucrat grade is too low ! (grade min: 150)");
}


//---------------   Functions   ---------------//

std::string	Bureaucrat::getName() const { return (_name); }
int			Bureaucrat::getGrade() const { return (_grade); }

void		Bureaucrat::incrementGrade()
{
	_grade = (_grade == 1) ? throw GradeTooHighException() : _grade - 1;
    std::cout << BLUE << "Grade incremented with success" << WHITE << std::endl;
}

void		Bureaucrat::decrementGrade()
{
	_grade = (_grade == 150) ? throw GradeTooLowException() : _grade + 1;
    std::cout << BLUE << "Grade decremented with success" << WHITE << std::endl;
}

void	Bureaucrat::signForm(AForm &f)
{
	try {
		f.beSigned(*this);
		std::cout << BLUE << _name << " signed " << f.getName() << WHITE << std::endl;
	} catch (std::exception &e) {
		std::cout << MAGENTA << "=> " << _name << " couldn't sign " << f.getName() << " because grade is too low" << WHITE << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const &f)
{
	if (f.execute(*this))
		std::cout << BLUE << getName() << " executed " << f.getName() << WHITE << std::endl;
	else
		std::cout << BLUE << getName() << " can't execute " << f.getName() << WHITE << std::endl;
}