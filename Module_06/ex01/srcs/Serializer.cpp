/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 21:57:45 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/20 20:24:59 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serializer.hpp"

//---------------   Constructors & Destructors   ---------------//

Serializer::Serializer() {}

Serializer::~Serializer() {}

Serializer::Serializer(const Serializer &cpy) { (void)cpy; }

Serializer	&Serializer::operator=(const Serializer &cpy)
{
	(void)cpy;
	return *this;
}


//---------------   Functions   ---------------//

uintptr_t Serializer::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}