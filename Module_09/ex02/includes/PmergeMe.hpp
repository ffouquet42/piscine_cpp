/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 15:28:14 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/24 02:06:26 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//---------------   includes   ---------------//

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <exception>
#include <cstdlib>
#include <utility>
#include <limits.h>
#include <ctime>


//---------------   class   ---------------//

class PmergeMe {
	public:
		PmergeMe();
		~PmergeMe();
		PmergeMe(const PmergeMe &cpy);	
		PmergeMe	&operator=(const PmergeMe &cpy);
		
		void	arg_is_valid(int argc, char **argv);

		void	start_ford_johson_vector(int argc, char **argv);
		void	start_ford_johson_deque(int argc, char **argv);

		void	print_time_vector(int argc);
		void	print_time_deque(int argc);
		void	print_before(int argc, char **argv);
		void	print_after(void);

	private:
		std::vector<std::pair<int, int> >		_vector;
		std::deque<std::pair<int, int> >		_deque;
		double									_duration_vector;
		double									_duration_deque;

		template <typename T> void	_fill_container(int argc, char **argv, T &c);
		template <typename T> void	_sort_pair(T &c);
		template <typename T> void	_merge_sort(T &c, int beg, int end);
		template <typename T> void	_merge(T &a, int beg, int mid, int end);

		std::vector<int>	_create_vector_from_pair(void);
		std::deque<int>		_create_deque_from_pair(void);

		template <typename T, typename G> void	_insert_sort(T &c, G &second_c);
		template <typename T> int				_search_index(T &c, int value, int left, int right);
		template <typename T> void				_insert(T &vector, int value, int index);
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