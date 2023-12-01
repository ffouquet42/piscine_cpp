/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 11:12:55 by fllanet           #+#    #+#             */
/*   Updated: 2023/12/01 11:56:53 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

// Constructor & Destructor

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << LIME << "ScavTrap : Constructor called" << WHITE << std::endl;
	_name = "No Name";
	_hit_points = 100;
	_energy = 50;
	_attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << BRIGHT_RED << "ScavTrap : Destructor called" << WHITE << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << LIME << "ScavTrap : Constructor called" << WHITE << std::endl;
	_hit_points = 100;
	_energy = 50;
	_attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &cpy) : ClapTrap(cpy)
{
	*this = cpy;
	std::cout << LIME << "ScavTrap : Constructor called" << WHITE << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &cpy)
{
	_name = cpy._name;
	_hit_points = cpy._hit_points;
	_energy = cpy._energy;
	_attack_damage = cpy._attack_damage;
	std::cout << LIME << "ScavTrap : Constructor called" << WHITE << std::endl;
	return (*this);
}


// Functions

void	ScavTrap::attack(const std::string &target)
{
	if (!_hit_points)
		std::cout << ORANGE << _name << " : Not enough Hit Points for attack." << WHITE << std::endl;
	else if (!_energy)
		std::cout << ORANGE << _name << " : Not enough Energy for attack." << WHITE << std::endl;
	else
	{
		std::cout << BLUE << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << WHITE << std::endl;
		_energy--;
	}
}

void	ScavTrap::guardGate()
{
	// if (!_hit_points)
	// 	std::cout << ORANGE << _name << " : Not enough Hit Points for switch in Gate keeper mode." << WHITE << std::endl;
	// else if (!_energy)
	// 	std::cout << ORANGE << _name << " : Not enough Energy for switch in Gate keeper mode." << WHITE << std::endl;
	// else
	// {
	// 	std::cout << MAGENTA << "ScavTrap : is now in Gate keeper mode!" << WHITE << std::endl;
	// 	_energy--;
	// }

	std::cout << MAGENTA << "Is now in Gate keeper mode!" << WHITE << std::endl;
}