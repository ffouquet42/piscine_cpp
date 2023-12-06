/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 03:44:45 by fllanet           #+#    #+#             */
/*   Updated: 2023/12/06 15:57:35 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::debug(void) 
{
	std::cout << CYAN << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << WHITE << std::endl;
}

void Harl::info(void) 
{
	std::cout << YELLOW << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << WHITE << std::endl;
}

void Harl::warning(void) 
{
	std::cout << MAGENTA << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << WHITE << std::endl;
}

void Harl::error(void) 
{
 	std::cout << RED << "This is unacceptable! I want to speak to the manager now." << WHITE << std::endl;
}

void Harl::complain(std::string level)
{
	int i = 0;
	
	std::string level_array[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	void (Harl::*f[4])() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error };

	while (i < 4)
	{
		if (level == level_array[i])
		{
			(this->*f[i])();
			return;
		}
		i++;
	}
	
	std::cout << "Unsupported complaint level." << std::endl;
}