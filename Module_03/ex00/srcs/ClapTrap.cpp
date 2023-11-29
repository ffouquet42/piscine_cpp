/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 09:26:11 by fllanet           #+#    #+#             */
/*   Updated: 2023/11/29 10:22:26 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

// Constructor & Destructor

ClapTrap::ClapTrap()
{
	std::cout << GREEN << "Constructor called" << WHITE << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << RED << "Destructor called" << WHITE << std::endl; 
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy(10), _attack_damage(0)
{
	std::cout << GREEN << "Constructor called" << WHITE << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cpy)
{
	*this = cpy;
	std::cout << GREEN << "Constructor called" << WHITE << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &cpy)
{
	_name = cpy._name;
	_hit_points = cpy._hit_points;
	_energy = cpy._energy;
	_attack_damage = cpy._attack_damage;
	std::cout << GREEN << "Constructor called" << WHITE << std::endl;
	return (*this);
}


// Functions

void	ClapTrap::attack(const std::string &target)
{
	//_energy = 0; // dev
	// _hit_points = 0; // dev
	if (!_hit_points)
		std::cout << ORANGE << _name << " : Not enough Hit points." << WHITE << std::endl;
	else if (!_energy)
		std::cout << ORANGE << _name << " : Not enough energy." << WHITE << std::endl;
	else
	{
		std::cout << BLUE << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << WHITE << std::endl;
		_energy--;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hit_points)
	{
		if (amount > _hit_points)
			_hit_points = 0;
		else
			_hit_points -= amount;
		std::cout << YELLOW << _name << " take " << amount << " damages, " << _hit_points << " hit points left." << WHITE << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	
}