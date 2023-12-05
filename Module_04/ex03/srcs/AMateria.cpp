/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:17:07 by fllanet           #+#    #+#             */
/*   Updated: 2023/12/05 11:43:53 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

AMateria::AMateria() : _type("default") {} // default ?

AMateria::~AMateria() {}

AMateria::AMateria(std::string const &type) : _type(type) {}

AMateria::AMateria(AMateria const &cpy) { *this = cpy; }

AMateria	&AMateria::operator=(AMateria const &cpy)
{
	this->_type = cpy._type;
	return (*this);
}

void AMateria::use(ICharacter &target) { (void)target; } // (void) ?

std::string	const &AMateria::getType() const { return (this->_type); }
// const x2 ?