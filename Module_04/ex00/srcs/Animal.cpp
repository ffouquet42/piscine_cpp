/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 12:25:04 by fllanet           #+#    #+#             */
/*   Updated: 2023/12/12 16:32:58 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << GREEN << "Animal : Constructor called" << WHITE << std::endl;
}

Animal::~Animal()
{
	std::cout << RED << "Animal : Destructor called" << WHITE << std::endl;
}

Animal::Animal(const Animal &cpy)
{
	std::cout << GREEN << "Animal : Copy Constructor called" << WHITE << std::endl;
	*this = cpy;
}

Animal &Animal::operator=(const Animal &cpy)
{
	std::cout << GREEN << "Animal : Copy Operator called" << WHITE << std::endl;
	this->_type = cpy._type;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << YELLOW << "*Animal : Make Sound*" << WHITE << std::endl;
}

std::string	Animal::getType() const
{
	return (this->_type);
}