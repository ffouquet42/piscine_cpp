/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:40:26 by fllanet           #+#    #+#             */
/*   Updated: 2023/10/16 15:52:04 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main(void)
{
	Zombie *bob = newZombie("Bob");
	delete bob;

	Zombie *bill = newZombie("Bill");
	delete bill;
	
	Zombie *jhon = newZombie("Jhon");
	Zombie *peter = newZombie("Peter");
	delete jhon;
	delete peter;

	return (0);
}