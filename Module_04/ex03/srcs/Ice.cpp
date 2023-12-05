/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:06:45 by fllanet           #+#    #+#             */
/*   Updated: 2023/12/05 14:09:53 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::~Ice() {}

Ice::Ice(Ice const &cpy) : AMateria("ice") { *this = cpy; }

Ice		&Ice::operator=(Ice const &cpy)
{
	this->_type = cpy._type;
	return (*this);
}

Ice		*Ice::clone() const { return new Ice(*this); }

// phrase predifinie ? couleur
void	Ice::use(ICharacter &target) { std::cout << "Ice : '* shoot an ice bolt at " << target.getName() << std::endl; }