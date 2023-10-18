/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:32:05 by fllanet           #+#    #+#             */
/*   Updated: 2023/10/18 15:40:38 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	// variables initialization
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	// print adress memory
	std::cout << "\x1B[34m" << &str << "\x1B[0m" << std::endl;
	std::cout << "\x1B[34m" << stringPTR << "\x1B[0m" << std::endl;
	std::cout << "\x1B[34m" << &stringREF << "\x1B[0m" << std::endl;

	// print string value
	std::cout << "\x1B[32m" << str << "\x1B[0m" << std::endl;
	std::cout << "\x1B[32m" << *stringPTR << "\x1B[0m" << std::endl;
	std::cout << "\x1B[32m" << stringREF << "\x1B[0m" << std::endl;

	return (0);
}