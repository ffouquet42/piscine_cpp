/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:03:44 by fllanet           #+#    #+#             */
/*   Updated: 2023/10/17 19:09:09 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie()
{
	std::cout << GREEN << "Zombie created." << WHITE << std::endl;
}

Zombie::~Zombie()
{
	std::cout << RED << "Zombie deleted." << WHITE << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}

void	Zombie::announce(void)
{
	std::cout << YELLOW << this->name << ": BraiiiiiiinnnzzzZ..." << WHITE << std::endl;
}