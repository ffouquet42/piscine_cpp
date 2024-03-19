/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:18:48 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/20 00:14:25 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/B.hpp"

//---------------   Constructors & Destructors   ---------------//

B::B()
{
	std::cout << GREEN << "++ B default constructor called" << WHITE << std::endl;
}

B::~B()
{
	std::cout << RED << "-- B default destructor called" << WHITE << std::endl;
}