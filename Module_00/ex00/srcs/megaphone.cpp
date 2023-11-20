/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:34:17 by fllanet           #+#    #+#             */
/*   Updated: 2023/11/20 07:35:37 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/program.hpp"

int main(int argc, char **argv)
{
	if (argc < 2)
		std::cout << COLOR_BRIGHT_RED << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << COLOR_WHITE;
	for (int i = 1; argv[i]; i++)
		for (int j = 0; argv[i][j]; j++)
			std::cout << COLOR_GREEN << (char)toupper(argv[i][j]) << COLOR_WHITE;
	std::cout << std::endl;
	return (0);
}