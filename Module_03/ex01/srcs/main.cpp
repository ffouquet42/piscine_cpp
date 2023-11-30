/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 09:26:13 by fllanet           #+#    #+#             */
/*   Updated: 2023/11/30 15:01:33 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"

int main(void)
{
	ScavTrap player_1("player 1");
	
	for (int i = 0; i < 5; i++)
		player_1.takeDamage(1);
	
	for (int i = 0; i < 5; i++)
		player_1.beRepaired(2);
	
	for (int i = 0; i < 46; i++)
		player_1.attack("player 2");
	
	player_1.guardGate();
	player_1.takeDamage(200);

	// ClapTrap player_2("player 2");
	// player_2.guardGate();
	
	return (0);	
}
