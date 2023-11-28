/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 08:15:43 by fllanet           #+#    #+#             */
/*   Updated: 2023/11/28 09:19:30 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"
#include "../includes/Point.hpp"

int	main( void )
{
	// False
	Point	a(1.0f, 0.0f), b(20.0f, 0.0f), c(0.0f, 20.0f), point(0.0f, 0.10f);

	if (bsp(a, b, c, point))
		std::cout << GREEN << "True" << WHITE << std::endl;
	else
		std::cout << RED << "False" << WHITE << std::endl;
	return 0;
}