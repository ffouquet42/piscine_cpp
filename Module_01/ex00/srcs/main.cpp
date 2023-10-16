/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:40:26 by fllanet           #+#    #+#             */
/*   Updated: 2023/10/16 16:31:48 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main(void)
{
	Zombie *bob = newZombie("Bob");
	bob->announce();
	delete bob;

	std::cout << std::endl;

	Zombie *bill = newZombie("Bill");
	delete bill;
	
	std::cout << std::endl;

	Zombie *john = newZombie("John");
	Zombie *peter = newZombie("Peter");
	peter->announce();
	john->announce();
	delete john;
	delete peter;

	std::cout << std::endl;

	delete newZombie("Parker");

	std::cout << std::endl;

	randomChump("Bobby");
	randomChump("Johnny");

	return (0);
}