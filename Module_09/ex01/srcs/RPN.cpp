/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 15:28:09 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/24 02:43:35 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RPN.hpp"

//---------------   Constructors & Destructors   ---------------//

RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN(const RPN &cpy)
{
	if (this != &cpy)
		*this = cpy;
}

RPN	&RPN::operator=(const RPN &cpy)
{
	if (this != &cpy)
		*this = cpy;
	return (*this);
}


//---------------   Functions   ---------------//

