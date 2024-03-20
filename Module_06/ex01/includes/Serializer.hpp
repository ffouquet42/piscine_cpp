/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 21:57:50 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/20 20:23:21 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//---------------   includes   ---------------//
# include <iostream>
# include <string>


//---------------   defines   ---------------//

#define uintptr_t unsigned long


//---------------   structures   ---------------//

struct Data
{
	int data_int;
	double data_double;
	std::string data_str;
};


//---------------   class   ---------------//
class Serializer
{
	public:
		Serializer();
		~Serializer();
		Serializer(const Serializer &cpy);
		Serializer &operator=(const Serializer &cpy);
		
		static uintptr_t serialize(Data *ptr);
		static Data *deserialize(uintptr_t raw);
		
	private:
		
};


//---------------   colors   ---------------//
# define RED			"\x1B[31m"
# define GREEN			"\x1B[32m"
# define YELLOW			"\x1B[33m"
# define ORANGE			"\x1B[33;91m"
# define BLUE			"\x1B[34m"
# define MAGENTA		"\x1B[35m"
# define CYAN			"\x1B[36m"
# define WHITE			"\x1B[0m"
# define LIME 			"\x1B[38;5;118m"
# define FOREST_GREEN	"\x1B[38;5;34m"
# define BRIGHT_RED		"\x1B[38;5;9m"