/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 22:26:52 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/20 03:12:54 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//---------------   includes   ---------------//

# include <iostream>


//---------------   templates   ---------------//

template <typename T> void print(T &t)
{
	std::cout << t << std::endl;
}

template <typename T> void iter(T *arr, int size, void (*f)(T&))
{
	for (int i = 0; i < size; i++)
		f(arr[i]);
}


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