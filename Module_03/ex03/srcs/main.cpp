/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 09:26:13 by fllanet           #+#    #+#             */
/*   Updated: 2023/12/07 16:19:49 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"
#include "../includes/DiamondTrap.hpp"

int main(void)
{
	DiamondTrap player_1("player 1");
	
	for (int i = 0; i < 5; i++)
		player_1.takeDamage(1);
	
	for (int i = 0; i < 5; i++)
		player_1.beRepaired(2);
	
	for (int i = 0; i < 46; i++)
		player_1.attack("player 2");

	player_1.whoAmI();	
	
	player_1.highFivesGuys();
	player_1.guardGate();
	player_1.beRepaired(200);
	player_1.takeDamage(200);
	player_1.beRepaired(200);
	
	
	// ClapTrap player_2("player 2");
	// player_2.whoAmI();	
	// player_2.guardGate();
	// player_2.highFivesGuys();
	
	return (0);	
}
