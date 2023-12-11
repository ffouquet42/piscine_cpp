/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:03:38 by fllanet           #+#    #+#             */
/*   Updated: 2023/12/11 14:00:08 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"

Cure::Cure() { _type = "cure"; }

Cure::~Cure() {}

Cure::Cure(const Cure &cpy) : AMateria() { _type = cpy._type; }

Cure	&Cure::operator=(const Cure &cpy)
{
	if (this != &cpy)
		_type = cpy._type;
	return (*this);
}

Cure	*Cure::clone() const { return (new Cure()); } // ?

void	Cure::use(ICharacter &target)
{
	// C
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}