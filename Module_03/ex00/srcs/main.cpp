/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 09:26:13 by fllanet           #+#    #+#             */
/*   Updated: 2023/11/29 11:03:14 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

int main(void)
{
	ClapTrap player_1("Player 1");
	ClapTrap player_2("Player 2");
	ClapTrap player_3("Player 3");
	
	// ----- Attack ----- //
	std::cout << std::endl;
	std::cout << MAGENTA << "----- Attack -----" << WHITE << std::endl;
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

	// ----- Take Damage ----- //
	std::cout << std::endl;
	std::cout << MAGENTA << "----- Take Damage -----" << WHITE << std::endl;
	player_2.takeDamage(0);
	player_2.takeDamage(1);
	player_2.takeDamage(2);
	player_2.takeDamage(7);
	player_2.takeDamage(10);

	player_1.takeDamage(11);
	player_1.takeDamage(11);

	// ----- Attack ----- //
	std::cout << std::endl;
	std::cout << MAGENTA << "----- Attack -----" << WHITE << std::endl;
	
	player_1.attack("player 2");
	player_2.attack("player 1");
	
	// ----- Be Repaired ----- //
	std::cout << std::endl;
	std::cout << MAGENTA << "----- Be Repaired -----" << WHITE << std::endl;
	player_1.beRepaired(1);
	player_2.beRepaired(1);
	
	player_3.beRepaired(1);
	player_3.beRepaired(1);
	player_3.beRepaired(1);
	player_3.beRepaired(1);
	player_3.beRepaired(1);
	player_3.beRepaired(1);
	player_3.beRepaired(1);
	player_3.beRepaired(1);
	player_3.beRepaired(1);
	player_3.beRepaired(1);
	player_3.beRepaired(1);
	
	std::cout << std::endl;

	return (0);	
}
