/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:53:25 by fllanet           #+#    #+#             */
/*   Updated: 2023/12/11 14:44:19 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		_inventorySpells[i] = NULL;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete _inventorySpells[i];
}

Character::Character(const Character &cpy) : _name(cpy._name)
{
	for (int i = 0; i < 4; i++)
		delete _inventorySpells[i];

	for (int i = 0; i < 4; i++)
		if (cpy._inventorySpells[i])
			_inventorySpells[i] = cpy._inventorySpells[i]->clone(); // ?
}

Character	&Character::operator=(const Character &cpy)
{
	_name = cpy._name;
	
	if (this != &cpy) {
		for (int i = 0; i < 4; i++)
			delete _inventorySpells[i];

		for (int i = 0; i < 4; i++)
			if (cpy._inventorySpells[i])
				_inventorySpells[i] = cpy._inventorySpells[i]->clone();
	}
	return (*this);		
}

std::string const &Character::getName() const { return (this->_name); }

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_inventorySpells[i])
		{
			_inventorySpells[i] = m;
			std::cout << GREEN << "New spell added to the inventory" << WHITE << std::endl;
			return;
		}
	}
	std::cout << RED << "Inventory full, can't add more spells" << WHITE << std::endl;
}

void	Character::unequip(int idx)
{
	if (_inventorySpells[idx])
	{
		_inventorySpells[idx] = NULL;
		std::cout << YELLOW << "Spell dropped on the floor" << WHITE << std::endl;
	}
	else
		std::cout << RED << "Can't drop spell on the floor" << WHITE << std::endl;
}

void	Character::use(int idx, ICharacter &target)
{
	if ((idx < 0 || idx > 3) || !_inventorySpells[idx])
		std::cout << RED << "No spell found at this index" << WHITE << std::endl;
	else
		_inventorySpells[idx]->use(target);
}