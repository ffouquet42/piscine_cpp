/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 09:26:13 by fllanet           #+#    #+#             */
/*   Updated: 2023/12/01 09:34:56 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"

int main(void)
{
	FragTrap player_1("player 1");
	
	for (int i = 0; i < 5; i++)
		player_1.takeDamage(1);
	
	for (int i = 0; i < 5; i++)
		player_1.beRepaired(2);
	
	for (int i = 0; i < 96; i++)
		player_1.attack("player 2");
	
	player_1.highFivesGuys();
	
	player_1.beRepaired(200);
	player_1.takeDamage(200);
	player_1.beRepaired(200);
	
	// player_1.guardGate();
	// ClapTrap player_2("player 2");
	// player_2.guardGate();
	// player_2.highFivesGuys();
	
	return (0);	
}
