/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 06:06:05 by fllanet           #+#    #+#             */
/*   Updated: 2023/11/26 06:35:25 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug(void) 
{
	std::cout << CYAN << "[DEBUG]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << WHITE << std::endl;
}

void Harl::info(void) 
{
	std::cout << YELLOW << "[INFO]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << WHITE << std::endl;
}

void Harl::warning(void) 
{
	std::cout << MAGENTA << "[WARNING]\nI think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << WHITE << std::endl;
}

void Harl::error(void) 
{
 	std::cout << RED << "[ERROR]\nThis is unacceptable! I want to speak to the manager now." << WHITE << std::endl;
}

void Harl::complain(std::string level)
{
	int i = 0;
	
	std::string level_array[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	while (i < 4)
	{
		if (level == level_array[i])
			break;
		i++;
	}
	switch (i)
	{
	case 0:
		Harl::debug();
		break;
	case 1:
		Harl::info();
		break;
	case 2:
		Harl::warning();
		break;
	case 3:
		Harl::error();
		break;
	default:
		break;
	}
}