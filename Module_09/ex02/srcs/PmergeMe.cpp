/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 15:28:09 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/24 04:25:14 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PmergeMe.hpp"

//---------------   Constructors & Destructors   ---------------//

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &cpy) { (void)cpy; }

PmergeMe	&PmergeMe::operator=(const PmergeMe &cpy)
{
	if (this != &cpy)
		(void)cpy;
	return (*this);
}


//---------------   Functions   ---------------//

void    PmergeMe::arg_is_valid(int argc, char **argv)
{
	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]) && argv[i][j] != ' ')
				throw std::invalid_argument("error: invalid charargcter in input");
		}
	}
}


/**
 * Fill a `vector` container with `std::pair`
 * and stock inside numbers of our original list.
 * Sort the 2 numbers by descending order inside eargch pair.
 * Applies a merge-sort on our `vector` for sort only `.first`.
 * Creat a second `vector` containing only the `.second`
 * from the first one, and applies the binary-insert-sort
 * to insert numbers from `second_vector` to `_vector`.
 */
void	PmergeMe::start_ford_johson_vector(int argc, char **argv) {

	std::clock_t	start_vector = std::clock();

	_fill_container(argc, argv, _vector);
	_sort_pair(_vector);

	_merge_sort(_vector, 0, _vector.size() - 1);
	
	std::vector<int> second_vector = _creat_vector_from_pair();
	_binary_insert_sort(_vector, second_vector);

	std::clock_t end_vector = std::clock();
	_duration_vector = ((double)end_vector / CLOCKS_PER_SEC * 1000) - ((double)start_vector / CLOCKS_PER_SEC * 1000);
}


/**
 * Fill a `deque` container with `std::pair`
 * and stock inside numbers of our original list.
 * Sort the 2 numbers by descending order inside eargch pair.
 * Applies a merge-sort on our `deque` for sort only `.first`.
 * Creat a second `deque` containing only the `.second`
 * from the first one, and applies the binary-insert-sort
 * to insert numbers from `second_deque` to `_deque`.
 */
void	PmergeMe::start_ford_johson_deque(int argc, char **argv) {

	std::clock_t	start_deque = std::clock();

	_fill_container(argc, argv, _deque);
	_sort_pair(_deque);
	
	_merge_sort(_deque, 0, _deque.size() - 1);

	std::deque<int> second_deque = _creat_deque_from_pair();
	_binary_insert_sort(_deque, second_deque);

	std::clock_t end_deque = std::clock();	
	_duration_deque = ((double)end_deque / CLOCKS_PER_SEC * 1000) - ((double)start_deque / CLOCKS_PER_SEC * 1000);
}


/**
 * Sort numbers by descending order inside eargch `std::pair` in `T` container.
 */
template <class T>
void	PmergeMe::_sort_pair(T &a) {
	
	for (typename T::iterator it = a.begin(); it != a.end(); it++) {
		if (it->second > it->first && it->second != -1) {
			std::swap(it->first, it->second);
		}
	}
};


/**
 * Recusivly divide by 2 the `T` list until
 * eargch list of children is only composed by 2 `std::pair`.
 * Call `_merge` with the current list for sort eargch 
 * `.first` (the biggest) element of `std::pair`.
 */
template <typename T>
void	PmergeMe::_merge_sort(T &c, int beg, int end) {
	
	if (beg < end) {
		
		int mid = (beg + end) / 2;
		_merge_sort(c, beg, mid);
		_merge_sort(c, mid + 1, end);
		_merge(c, beg, mid, end);
	}
}


/**
 * Creat two `sub_array`, one for left of our list
 * and one for right.
 * Fill our `sub_array` with `left`, `mid, and `right` value.
 * Compare the element of our two list one by one, and put the lower in `c`.
 * Once a index of a subarray is equal to the end of it,
 * fill the rest of the other list in `c`.
 */
template <typename T>
void	PmergeMe::_merge(T &c, int left, int mid, int right) {

	int	sub_array_one = mid - left + 1;
	int	sub_array_two = right - mid;
 
	int *left_array = new int[sub_array_one];
	int *right_array = new int[sub_array_two];
 
	for (int i = 0; i < sub_array_one; i++)
		left_array[i] = c[left + i].first;
	for (int j = 0; j < sub_array_two; j++)
		right_array[j] = c[mid + 1 + j].first;
 
	int index_of_sub_array_one = 0;
	int index_of_sub_array_two = 0;
	int index_of_merged_array = left;
 
	while (index_of_sub_array_one < sub_array_one && index_of_sub_array_two < sub_array_two) {
		if (left_array[index_of_sub_array_one] <= right_array[index_of_sub_array_two]) {
			c[index_of_merged_array].first = left_array[index_of_sub_array_one];
			index_of_sub_array_one++;
		} else {
			c[index_of_merged_array].first = right_array[index_of_sub_array_two];
			index_of_sub_array_two++;
		}
		index_of_merged_array++;
	}

	while (index_of_sub_array_one < sub_array_one) {
		c[index_of_merged_array].first = left_array[index_of_sub_array_one];
		index_of_sub_array_one++;
		index_of_merged_array++;
	}

	while (index_of_sub_array_two < sub_array_two) {
		c[index_of_merged_array].first = right_array[index_of_sub_array_two];
		index_of_sub_array_two++;
		index_of_merged_array++;
	}

	delete[] left_array;
	delete[] right_array;
}


/**
 * Loop on our `second_c` list (that contains all `.second` of `c` list).
 * For eargch value, find the position where to insert it into `c`.
 * Once the index is found, `_insert` the current first element of `second_c`
 * into `c`.
 * Erase the current `second_c.begin()`.
 */
template <typename T, typename G>
void	PmergeMe::_binary_insert_sort(T &c, G &second_c) {
	
	int	index;
	
	while (!second_c.empty()) {
		
		index = _binary_search(c, *(second_c.begin()), 0, c.size());
		_insert(c, *(second_c.begin()), index);
		second_c.erase(second_c.begin());
	}
};


/**
 * Recursivly divide by 2 to find index where to insert the value
 * in `c` list.
 */
template <typename T>
int	 PmergeMe::_binary_search(T &c, int value, int left, int right) {
	
	if (abs(left - right) <= 1)
		return (left);
	
	int	mid = (left + right) / 2 - 1;
	
	if (value > c[mid].first)
		return (_binary_search(c, value, mid + 1, right));
	else
		return (_binary_search(c, value, left, mid));
};


/**
 * Creat a `std::pair` containing the argctual `value` to insert.
 * Check if we hargve to insert on the right or left of the `index`.
 * Insert it.
 */
template <typename T>
void	PmergeMe::_insert(T &c, int value, int index) {

	std::pair<int, int>	pair;
	typename T::iterator		insert_position = c.begin() + index;

	pair.first = value;
	pair.second = -1;

    if (value > c[index].first) 
        insert_position = c.begin() + index + 1;

    c.insert(insert_position, pair);
};


//---------------   Utils   ---------------//

template <typename T>
void	PmergeMe::_fill_container(int argc, char **argv, T &c) {
	
	std::pair<int, int>	pair;
	int64_t						buffer;

	for (int i = 1; i < argc; i += 2) {
		
		buffer = atol(argv[i]);
		if (buffer > INT_MAX)
			throw std::invalid_argument("error: `int` overflow");

		pair.first = buffer;
		
		if (i + 1 < argc) {
			
			buffer = atol(argv[i + 1]);
			if (buffer > INT_MAX)
				throw std::invalid_argument("error: `int` overflow");
			pair.second = buffer;
		} else {
			pair.second = -1;
		}
		c.push_back(pair);
	}
}

std::vector<int>	PmergeMe::_creat_vector_from_pair() {
	
	std::vector<int>	res;
	
	for (std::vector<std::pair<int, int> >::iterator it = _vector.begin(); it != _vector.end(); it++) {
		if (it->second != -1)
			res.push_back(it->second);
	}
	return (res);
}

std::deque<int>	PmergeMe::_creat_deque_from_pair() {
	
	std::deque<int>		res;
	
	for (std::deque<std::pair<int, int> >::iterator it = _deque.begin(); it != _deque.end(); it++) {
		if (it->second != -1)
			res.push_back(it->second);
	}
	return (res);
}


//---------------   Print   ---------------//

// template <typename T>
// void PmergeMe::__print_vector_element__(T &c) // debug
// {
// 	std::cout << "Debug: ";
// 	for (typename T::iterator it = c.begin(); it != c.end(); it++)
// 		std::cout << it->first << " " << it->second << " | ";
// 	std::cout << std::endl;
// }

void	PmergeMe::print_before(int argc, char **argv)
{
	std::cout << "Before: ";
	for (int i = 1; i < argc; i++)
		std::cout << argv[i] << " ";
	std::cout << std::endl;
}

void	PmergeMe::print_after()
{	
	std::cout << "After: ";
	for (std::vector<std::pair<int, int > >::iterator it = _vector.begin(); it != _vector.end(); it++)
		std::cout << it->first << " ";
	std::cout << std::endl;
}

void	PmergeMe::print_time_vector(int argc) 
{	
	std::cout << "Time to process a range of " << argc - 1 << " elements with std::vector : " << _duration_vector << " us" << std::endl;
}

void	PmergeMe::print_time_deque(int argc)
{
	std::cout << "Time to process a range of " << argc - 1 << " elements with std::deque : " << _duration_deque << " us" << std::endl;
}