/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 15:28:09 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/24 00:27:43 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << RED << "Error: need file as argument" << WHITE << std::endl;
		return (1);
	}

	std::ifstream in(argv[1]);
	if (!in.is_open())
	{
		std::cout << RED << "Error: could not open file." << WHITE << std::endl;
		return (1);
	}

	BitcoinExchange btc;
	btc.loadDataBase(); //
	btc.calculateRatio(in); //

	return (0);
}