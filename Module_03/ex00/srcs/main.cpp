/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 09:26:13 by fllanet           #+#    #+#             */
/*   Updated: 2023/11/29 10:21:18 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int main(void)
{
	ClapTrap player_1("Player 1");
	ClapTrap player_2("Player 2");
	ClapTrap player_3;

	player_1.attack("player 2");
	player_1.attack("player 2");
	player_1.attack("player 2");
	player_1.attack("player 2");
	player_1.attack("player 2");
	player_1.attack("player 2");
	player_1.attack("player 2");
	player_1.attack("player 2");
	player_1.attack("player 2");
	player_1.attack("player 2");
	player_1.attack("player 2");

	player_2.takeDamage(0);
	player_2.takeDamage(1);
	player_2.takeDamage(2);
	player_2.takeDamage(7);
	player_2.takeDamage(10);

	player_1.takeDamage(11);
	
	return (0);	
}
