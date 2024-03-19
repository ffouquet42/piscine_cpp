/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:18:46 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/20 00:14:16 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/A.hpp"

//---------------   Constructors & Destructors   ---------------//

A::A()
{
	std::cout << GREEN << "++ A default constructor called" << WHITE << std::endl;
}

A::~A()
{
	std::cout << RED << "-- A default destructor called" << WHITE << std::endl;
}