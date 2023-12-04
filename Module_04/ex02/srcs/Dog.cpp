/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 12:25:08 by fllanet           #+#    #+#             */
/*   Updated: 2023/12/04 16:25:08 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << GREEN << "Dog : Constructor called" << WHITE << std::endl;
	_type = "Dog";
	_brain = new Brain();
}

Dog::~Dog()
{
	std::cout << RED << "Dog : Destructor called" << WHITE << std::endl;
	delete _brain;
}

Dog::Dog(const Dog &cpy) : Animal(cpy)
{
	std::cout << GREEN << "Dog : Constructor called" << WHITE << std::endl;
	*this = cpy;
}

Dog &Dog::operator=(const Dog &cpy)
{
	std::cout << GREEN << "Dog : Constructor called" << WHITE << std::endl;
	this->_type = cpy._type;
	this->_brain = new Brain(*cpy._brain);
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << YELLOW << "*Dog : Woof*" << WHITE << std::endl;
}