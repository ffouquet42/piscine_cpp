/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:53:25 by fllanet           #+#    #+#             */
/*   Updated: 2023/12/05 12:12:11 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"

Character::~Character() { clearInventory(); }

Character::Character(const std::string &name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

Character::Character(const Character &cpy) { copyInventory(cpy); }

Character	&Character::operator=(const Character &cpy)
{
	if (this != &cpy) {
		clearInventory();
		copyInventory(cpy);
	}
	return (*this);
}

std::string const &Character::getName() const { return (this->_name); }

// equip in first slot available
void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			break ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4 && _inventory[idx] != NULL)
		_inventory[idx]->use(target); // unequip ?
}

void	Character::clearInventory()
{
	for (int i = 0; i < 4; i++)
	{
		delete (_inventory[i]);
		_inventory[i] = NULL;
	}
}

void	Character::copyInventory(const Character &cpy)
{
	if (this != &cpy)
	{
		for (int i = 0; i < 4; i++)
		{
			if (cpy._inventory[i] != NULL)
				_inventory[i] = cpy._inventory[i]->clone();
			else
				_inventory[i] = NULL;
		}
	}
}