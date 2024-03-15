/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 21:57:47 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/15 23:13:17 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serializer.hpp"

int main(void)
{
	Data data;
	data.i = 42;
	data.d = 42.42;
	data.s = "fourty two";

	uintptr_t ptr = Serializer::serialize(&data);
	Data *result = Serializer::deserialize(ptr);

	std::cout << "Original data: " << &data << ", " << data.i << ", " << data.s << ", " << data.d << std::endl;
	std::cout << "Serialized pointer: " << ptr << std::endl;
	std::cout << "Deserialized data: " << result << ", " << result->i << ", " << result->s << ", " << result->d << std::endl;

	if (&data == result)
	
	return 0;
}