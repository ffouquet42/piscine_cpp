/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 12:25:16 by fllanet           #+#    #+#             */
/*   Updated: 2023/12/12 16:34:07 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << GREEN << "WrongCat : Constructor called" << WHITE << std::endl;
	_type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << RED << "WrongCat : Destructor called" << WHITE << std::endl;
}

WrongCat::WrongCat(const WrongCat &cpy) : WrongAnimal(cpy)
{
	std::cout << GREEN << "WrongCat : Copy Constructor called" << WHITE << std::endl;
	*this = cpy;
}

WrongCat &WrongCat::operator=(const WrongCat &cpy)
{
	std::cout << GREEN << "WrongCat : Copy Operator called" << WHITE << std::endl;
	this->_type = cpy._type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << YELLOW << "*WrongCat : Wrong Miew*" << WHITE << std::endl;
}