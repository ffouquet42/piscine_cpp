/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 12:25:06 by fllanet           #+#    #+#             */
/*   Updated: 2023/12/12 16:35:10 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << GREEN << "Cat : Constructor called" << WHITE << std::endl;
	_type = "Cat";
	_brain = new Brain();
}

Cat::~Cat()
{
	std::cout << RED << "Cat : Destructor called" << WHITE << std::endl;
	delete _brain;
}

Cat::Cat(const Cat &cpy) : Animal(cpy)
{
	std::cout << GREEN << "Cat : Copy Constructor called" << WHITE << std::endl;
	*this = cpy;
}

Cat &Cat::operator=(const Cat &cpy)
{
	std::cout << GREEN << "Cat : Copy Operator called" << WHITE << std::endl;
	this->_type = cpy._type;
	this->_brain = new Brain(*cpy._brain);
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << YELLOW << "*Cat : Miew*" << WHITE << std::endl;
}