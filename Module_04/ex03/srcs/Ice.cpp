/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:06:45 by fllanet           #+#    #+#             */
/*   Updated: 2023/12/11 14:45:14 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

Ice::Ice() { _type = "ice"; }

Ice::~Ice() {}

Ice::Ice(const Ice &cpy) : AMateria() { _type = cpy._type; }

Ice		&Ice::operator=(const Ice &cpy)
{
	if (this != &cpy)
		_type = cpy._type;
	return (*this);
}

Ice		*Ice::clone() const { return (new Ice()); }

void	Ice::use(ICharacter &target)
{
	std::cout << CYAN << "* shoots an ice bolt at " << target.getName() << " *" << WHITE << std::endl;
}