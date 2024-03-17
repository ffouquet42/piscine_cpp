/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:18:51 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/17 17:26:01 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Base.hpp"

//---------------   Constructors & Destructors   ---------------//

Base::Base()
{
	std::cout << GREEN << "++ Base default constructor called" << WHITE << std::endl;
}

Base::~Base()
{
	std::cout << RED << "-- Base default destructor called" << WHITE << std::endl;
}