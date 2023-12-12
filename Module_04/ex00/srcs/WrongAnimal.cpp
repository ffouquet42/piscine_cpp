/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 12:25:14 by fllanet           #+#    #+#             */
/*   Updated: 2023/12/12 16:33:53 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
	std::cout << GREEN << "WrongAnimal : Constructor called" << WHITE << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << RED << "WrongAnimal : Destructor called" << WHITE << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy)
{
	std::cout << GREEN << "WrongAnimal : Copy Constructor called" << WHITE << std::endl;
	*this = cpy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &cpy)
{
	std::cout << GREEN << "WrongAnimal : Copy Operator called" << WHITE << std::endl;
	this->_type = cpy._type;
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << YELLOW << "*WrongAnimal : Make Wrong Sound*" << WHITE << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->_type);
}