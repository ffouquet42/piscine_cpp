/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 12:25:08 by fllanet           #+#    #+#             */
/*   Updated: 2023/12/12 16:33:35 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog()
{
	std::cout << GREEN << "Dog : Constructor called" << WHITE << std::endl;
	_type = "Dog";
}

Dog::~Dog()
{
	std::cout << RED << "Dog : Destructor called" << WHITE << std::endl;
}

Dog::Dog(const Dog &cpy) : Animal(cpy)
{
	std::cout << GREEN << "Dog : Copy Constructor called" << WHITE << std::endl;
	*this = cpy;
}

Dog &Dog::operator=(const Dog &cpy)
{
	std::cout << GREEN << "Dog : Copy Operator called" << WHITE << std::endl;
	this->_type = cpy._type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << YELLOW << "*Dog : Woof*" << WHITE << std::endl;
}