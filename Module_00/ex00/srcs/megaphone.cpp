/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:34:17 by fllanet           #+#    #+#             */
/*   Updated: 2023/12/06 11:27:11 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/program.hpp"

int main(int argc, char **argv)
{
	if (argc < 2)
		std::cout << YELLOW << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << WHITE;
	for (int i = 1; argv[i]; i++)
		for (int j = 0; argv[i][j]; j++)
			std::cout << GREEN << (char)toupper(argv[i][j]) << WHITE;
	std::cout << std::endl;
	return (0);
}