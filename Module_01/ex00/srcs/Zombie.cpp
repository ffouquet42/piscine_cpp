/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:58:49 by fllanet           #+#    #+#             */
/*   Updated: 2023/10/16 16:37:06 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << GREEN << "Zombie <" << this->name << "> created." << WHITE << std::endl;
}

Zombie::~Zombie()
{
	std::cout << RED << "Zombie <" << this->name << "> deleted." << WHITE << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << YELLOW << this->name << ": BraiiiiiiinnnzzzZ..." << WHITE << std::endl;
}