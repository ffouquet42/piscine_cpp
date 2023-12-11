/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:17:07 by fllanet           #+#    #+#             */
/*   Updated: 2023/12/11 13:43:10 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"

AMateria::AMateria() {}

AMateria::~AMateria() {}

AMateria::AMateria(std::string const &type) : _type(type) {}

AMateria::AMateria(AMateria const &cpy) : _type(cpy._type) {}

AMateria	&AMateria::operator=(AMateria const &cpy)
{
	if (this != &cpy)
		_type = cpy._type;
	return (*this);
}

void AMateria::use(ICharacter &target) { (void)target; }

std::string	const &AMateria::getType() const { return (this->_type); }