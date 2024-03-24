/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 15:28:09 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/24 04:27:50 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PmergeMe.hpp"

int main(int argc, char **argv)
{
	PmergeMe merge_me;

	try {
		// Check if arguments are valid
		merge_me.arg_is_valid(argc, argv);
		
		// Print the list before modification
		merge_me.print_before(argc, argv);
		
		// Start the ford-johson algorithm on a vector and deque containers
		merge_me.start_ford_johson_vector(argc, argv);
		merge_me.start_ford_johson_deque(argc, argv);
		
		// Print the list after the ford-johson algorithm
		merge_me.print_after();

		// Print time of executing algortihm on a vector and deque containers
		merge_me.print_time_vector(argc);
		merge_me.print_time_deque(argc);
		
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
		return (1);
	}
	return (0);
}