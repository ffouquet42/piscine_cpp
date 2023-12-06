/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 17:28:32 by fllanet           #+#    #+#             */
/*   Updated: 2023/12/06 14:03:28 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main(void)
{
	std::string	name = "Bob";
	int			N = 5;
	Zombie		*horde = zombieHorde(N, name);
	
	for (int i = 0; i < N; i++)
		horde[i].announce();
	return (delete[] horde, 0);
}