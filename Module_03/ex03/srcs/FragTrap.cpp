/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 09:13:30 by fllanet           #+#    #+#             */
/*   Updated: 2023/12/01 09:34:35 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

// Constructor & Destructor

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << FOREST_GREEN << "FragTrap : Constructor called" << WHITE << std::endl;
	_name = "No Name";
	_hit_points = 100;
	_energy = 100;
	_attack_damage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << BRIGHT_RED << "FragTrap : Destructor called" << WHITE << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << FOREST_GREEN << "FragTrap : Constructor called" << WHITE << std::endl;
	_hit_points = 100;
	_energy = 100;
	_attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &cpy) : ClapTrap(cpy)
{
	*this = cpy;
	std::cout << FOREST_GREEN << "FragTrap : Constructor called" << WHITE << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &cpy)
{
	_name = cpy._name;
	_hit_points = cpy._hit_points;
	_energy = cpy._energy;
	_attack_damage = cpy._attack_damage;
	std::cout << FOREST_GREEN << "FragTrap : Constructor called" << WHITE << std::endl;
	return (*this);
}


// Functions

void	FragTrap::attack(const std::string &target)
{
	if (!_hit_points)
		std::cout << ORANGE << _name << " : Not enough Hit Points for attack." << WHITE << std::endl;
	else if (!_energy)
		std::cout << ORANGE << _name << " : Not enough Energy for attack." << WHITE << std::endl;
	else
	{
		std::cout << BLUE << "FragTrap " << _name << " attacks " << target << ", causing " << _attack_damage << " points of damage!" << WHITE << std::endl;
		_energy--;
	}
}

void	FragTrap::highFivesGuys()
{
	// if (!_hit_points)
	// 	std::cout << ORANGE << _name << " : Not enough Hit Points for *High Fives Guys*." << WHITE << std::endl;
	// else if (!_energy)
	// 	std::cout << ORANGE << _name << " : Not enough Energy for *High Fives Guys*." << WHITE << std::endl;
	// else
	// {
	// 	std::cout << MAGENTA << "FragTrap : *High Fives Guys*" << WHITE << std::endl;
	// 	_energy--;
	// }
	
	std::cout << MAGENTA << "FragTrap : *High Fives Guys*" << WHITE << std::endl;
}