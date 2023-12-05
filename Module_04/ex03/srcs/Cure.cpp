/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:03:38 by fllanet           #+#    #+#             */
/*   Updated: 2023/12/05 14:09:58 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::~Cure() {}

Cure::Cure(Cure const &cpy) : AMateria("cure") { *this = cpy; }

Cure	&Cure::operator=(Cure const &cpy)
{
	this->_type = cpy._type;
	return (*this);
}

Cure	*Cure::clone() const { return new Cure(*this); }

// phrase definie ? couleur
void	Cure::use(ICharacter &target) { std::cout << "Cure : '* heals" << target.getName() << "'s wounds *'" << std::endl; }