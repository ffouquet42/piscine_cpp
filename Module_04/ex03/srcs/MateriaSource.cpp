/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:15:51 by fllanet           #+#    #+#             */
/*   Updated: 2023/12/11 14:46:02 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_knownSpells[i] = NULL;
}


MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete _knownSpells[i];
}

MateriaSource::MateriaSource(const MateriaSource &cpy) { *this = cpy; }

MateriaSource	&MateriaSource::operator=(const MateriaSource &cpy)
{ 
	for (int i = 0; i < 4; i++)
	{
		delete _knownSpells[i];
		_knownSpells[i] = NULL;
	}

	for (int i = 0; i < 4; i++)
	{
		if (cpy._knownSpells[i])
			_knownSpells[i] = cpy._knownSpells[i]->clone();
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_knownSpells[i])
		{
			_knownSpells[i] = m;
			break ;
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_knownSpells[i] && _knownSpells[i]->getType() == type)
			return (_knownSpells[i]->clone());
	}
	return (0);
}