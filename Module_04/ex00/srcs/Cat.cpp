/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 12:25:06 by fllanet           #+#    #+#             */
/*   Updated: 2023/12/04 13:38:39 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat()
{
	std::cout << GREEN << "Cat : Constructor called" << WHITE << std::endl;
	_type = "Cat";
}

Cat::~Cat()
{
	std::cout << RED << "Cat : Destructor called" << WHITE << std::endl;
}

Cat::Cat(const Cat &cpy)
{
	std::cout << GREEN << "Cat : Constructor called" << WHITE << std::endl;
	*this = cpy;
}

Cat &Cat::operator=(const Cat &cpy)
{
	std::cout << GREEN << "Cat : Constructor called" << WHITE << std::endl;
	this->_type = cpy._type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << YELLOW << "*Cat : Miew*" << WHITE << std::endl;
}