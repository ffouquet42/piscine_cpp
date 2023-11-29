/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 09:26:11 by fllanet           #+#    #+#             */
/*   Updated: 2023/11/29 10:56:50 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

// Constructor & Destructor

ClapTrap::ClapTrap() : _name("No Name"), _hit_points(10), _energy(10), _attack_damage(0)
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
	if (!_hit_points)
		std::cout << ORANGE << _name << " : Not enough Hit Points for attack." << WHITE << std::endl;
	else if (!_energy)
		std::cout << ORANGE << _name << " : Not enough Energy for attack." << WHITE << std::endl;
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
	else
		std::cout << ORANGE << _name << " : can't take more damage, already dead." << WHITE << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!_hit_points)
		std::cout << ORANGE << _name << " : Not enough Hit Points for repair." << WHITE << std::endl;
	else if (!_energy)
		std::cout << ORANGE << _name << " : Not enough Energy for repair." << WHITE << std::endl;
	else
	{
		_hit_points += amount;
		std::cout << CYAN << _name << " repair itself " << amount << " Hit Points, now have " << _hit_points << " Hit Points left." << WHITE << std::endl;
		_energy--;
	}
}