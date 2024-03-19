/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 21:57:45 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/19 23:22:16 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serializer.hpp"

//---------------   Constructors & Destructors   ---------------//

Serializer::Serializer()
{
	std::cout << GREEN << "++ Serializer default constructor called" << WHITE << std::endl;
}


//---------------   Functions   ---------------//

uintptr_t Serializer::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr)); // reinterprete la representation binaire des donnees d'un type comme si elle etait d'un autre type
}

Data *Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}