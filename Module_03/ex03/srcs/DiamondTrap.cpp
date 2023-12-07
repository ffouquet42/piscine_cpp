/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 09:39:59 by fllanet           #+#    #+#             */
/*   Updated: 2023/12/07 16:22:26 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DiamondTrap.hpp"

// Constructor & Destructor

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << LIME << "DiamondTrap : Constructor called" << WHITE << std::endl;
	_name = "No Name";
	_hit_points = FragTrap::_hit_points = 100;
	_energy = ScavTrap::_energy = 50;
	_attack_damage = FragTrap::_attack_damage = 30;
	ClapTrap::_name = _name + "_clap_name";
}

DiamondTrap::~DiamondTrap()
{
	std::cout << BRIGHT_RED << "DiamondTrap : Destructor called" << WHITE << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	std::cout << LIME << "DiamondTrap : Constructor called" << WHITE << std::endl;
	_name = name;
	_hit_points = FragTrap::_hit_points = 100;
	_energy = ScavTrap::_energy = 50;
	_attack_damage = FragTrap::_attack_damage = 30;
	ClapTrap::_name = name + "_clap_name";
}

DiamondTrap::DiamondTrap(const DiamondTrap &cpy) : ClapTrap(cpy), ScavTrap(cpy), FragTrap(cpy)
{
	_name = cpy._name;
	_hit_points = cpy._hit_points;
	_energy = cpy._energy;
	_attack_damage = cpy._attack_damage;
	ClapTrap::_name = cpy._name + "_clap_name";
	std::cout << LIME << "DiamondTrap : Constructor called" << WHITE << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &cpy)
{
	_name = cpy._name;
	_hit_points = cpy._hit_points;
	_energy = cpy._energy;
	_attack_damage = cpy._attack_damage;
	ClapTrap::_name = cpy._name + "_clap_name";
	std::cout << LIME << "DiamondTrap : Constructor called" << WHITE << std::endl;
	return (*this);
}


// Functions

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << MAGENTA << "DiamondTrap name : " << this->_name << "\nClapTrap name : " << ClapTrap::_name << WHITE << std::endl;
}