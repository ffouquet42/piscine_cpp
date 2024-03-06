/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 15:28:12 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/06 12:56:09 by fllanet          ###   ########.fr       */
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
	std::cout << GREEN << "++ Bureaucrat constructor called" << WHITE << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << RED << "-- Bureaucrat destructor called" << WHITE << std::endl; 
}

// Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade)
// {
// 	std::cout << GREEN << "Constructor called" << WHITE << std::endl;
// }

// Bureaucrat::Bureaucrat(const Bureaucrat &cpy)
// {
// 	*this = cpy;
// 	std::cout << GREEN << "Constructor called" << WHITE << std::endl;
// }

// Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &cpy)
// {
// 	_name = cpy._name;
// 	_grade = cpy._grade;
// 	std::cout << GREEN << "Constructor called" << WHITE << std::endl;
// 	return (*this);
// }


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

void		Bureaucrat::getStatus(std::string name, int grade)
{
	std::cout << "Bureaucrat <" << name << "> is grade <" << grade << ">" << std::endl;
}

void		Bureaucrat::incrementGrade() // Ternaire?
{
	if (_grade == 1)
		throw GradeTooHighException();
	_grade--;
	std::cout << BLUE << "Grade incremented with success" << WHITE << std::endl;
}

void		Bureaucrat::decrementGrade() // Ternaire?
{
	if (_grade == 150)
		throw GradeTooLowException();
	_grade++;
	std::cout << BLUE << "Grade decremented with success" << WHITE << std::endl;
}