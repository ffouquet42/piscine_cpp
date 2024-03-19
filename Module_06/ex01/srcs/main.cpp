/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 21:57:47 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/20 00:09:10 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serializer.hpp"

int main(void)
{
	std::cout << YELLOW << "\nCreate Data struct" << WHITE << std::endl;
	std::cout << BLUE << "* data_int    = 42" << std::endl;
	std::cout << "* data_double = 42.42" << std::endl;
	std::cout << "* data_str    = \"fourty two\"" << WHITE << std::endl;
	Data data = { 42, 42.42, "fourty two" };
	
	uintptr_t data_serialized = Serializer::serialize(&data);
	std::cout << YELLOW << "\nSerialize Data" << WHITE << std::endl;
	std::cout << BLUE << data_serialized << WHITE << std::endl;

	Data *data_deserialized = Serializer::deserialize(data_serialized);
	std::cout << YELLOW << "\nDeserialize Data" << WHITE << std::endl;

	std::cout << "            | " << GREEN << "Deserialized Data" << WHITE << " | " << MAGENTA << "Original Data" << WHITE << std::endl;
	std::cout << "------------|-------------------|---------------" << std::endl;
	std::cout << "Adress      | " << GREEN << data_deserialized << WHITE << "    | " << MAGENTA << &data << WHITE << std::endl;
	std::cout << "data_int    | " << GREEN << data_deserialized->data_int << WHITE << "                | " << MAGENTA << data.data_int << WHITE << std::endl;
	std::cout << "data_double | " << GREEN << data_deserialized->data_double << WHITE << "             | " << MAGENTA << data.data_double << WHITE << std::endl;
	std::cout << "data_str    | " << GREEN << data_deserialized->data_str << WHITE << "        | " << MAGENTA << data.data_str << WHITE << std::endl << std::endl;

	return (0);
}