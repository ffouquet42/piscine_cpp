/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:18:54 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/20 00:14:33 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/C.hpp"

//---------------   Constructors & Destructors   ---------------//

C::C()
{
	std::cout << GREEN << "++ C default constructor called" << WHITE << std::endl;
}

C::~C()
{
	std::cout << RED << "-- C default destructor called" << WHITE << std::endl;
}