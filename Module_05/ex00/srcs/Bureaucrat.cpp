/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 15:28:12 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/02 15:58:46 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

// Constructor & Destructor

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
	std::cout << GREEN << "Constructor called" << WHITE << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << RED << "Destructor called" << WHITE << std::endl; 
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


// Functions
