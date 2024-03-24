/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 15:28:09 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/24 07:00:06 by fllanet          ###   ########.fr       */
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

// Check if args are digit or space
void    PmergeMe::arg_is_valid(int argc, char **argv)
{
	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]) && argv[i][j] != ' ')
				throw std::invalid_argument("error: invalid character in input");
		}
	}
}

void	PmergeMe::start_ford_johson_vector(int argc, char **argv)
{
	std::clock_t	start_vector = std::clock();

	// Fill _vector container with pair
	_fill_container(argc, argv, _vector);
	
	// Sort each pair
	_sort_pair(_vector);
	
	// Merge and sort one pair with one pair
	_merge_sort(_vector, 0, _vector.size() - 1);
	
	// Create _vector of int instead pair of int
	std::vector<int> second_vector = _create_vector_from_pair();

	// Transform _vector pair of int into _vector int
	_insert_sort(_vector, second_vector);

	std::clock_t end_vector = std::clock();
	
	_duration_vector = ((double)end_vector / CLOCKS_PER_SEC * 1000) - ((double)start_vector / CLOCKS_PER_SEC * 1000);
}

void	PmergeMe::start_ford_johson_deque(int argc, char **argv)
{
	std::clock_t	start_deque = std::clock();

	_fill_container(argc, argv, _deque);
	_sort_pair(_deque);
	_merge_sort(_deque, 0, _deque.size() - 1);

	std::deque<int> second_deque = _create_deque_from_pair();
	_insert_sort(_deque, second_deque);

	std::clock_t end_deque = std::clock();	
	_duration_deque = ((double)end_deque / CLOCKS_PER_SEC * 1000) - ((double)start_deque / CLOCKS_PER_SEC * 1000);
}

template <class T>
void	PmergeMe::_sort_pair(T &c)
{
	for (typename T::iterator it = c.begin(); it != c.end(); it++)
	{
		if (it->second > it->first && it->second != -1)
			std::swap(it->first, it->second);
	}
};

template <typename T>
void	PmergeMe::_merge_sort(T &c, int beg, int end)
{
	if (beg < end)
	{
		int mid = (beg + end) / 2;
		_merge_sort(c, beg, mid);
		_merge_sort(c, mid + 1, end);
		_merge(c, beg, mid, end);
	}
}

template <typename T>
void	PmergeMe::_merge(T &c, int left, int mid, int right)
{
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
 
	while (index_of_sub_array_one < sub_array_one && index_of_sub_array_two < sub_array_two)
	{
		if (left_array[index_of_sub_array_one] <= right_array[index_of_sub_array_two])
		{
			c[index_of_merged_array].first = left_array[index_of_sub_array_one];
			index_of_sub_array_one++;
		}
		else
		{
			c[index_of_merged_array].first = right_array[index_of_sub_array_two];
			index_of_sub_array_two++;
		}
		index_of_merged_array++;
	}

	while (index_of_sub_array_one < sub_array_one)
	{
		c[index_of_merged_array].first = left_array[index_of_sub_array_one];
		index_of_sub_array_one++;
		index_of_merged_array++;
	}

	while (index_of_sub_array_two < sub_array_two)
	{
		c[index_of_merged_array].first = right_array[index_of_sub_array_two];
		index_of_sub_array_two++;
		index_of_merged_array++;
	}

	delete[] left_array;
	delete[] right_array;
}

template <typename T, typename G>
void	PmergeMe::_insert_sort(T &c, G &second_c)
{
	int	index;
	
	while (!second_c.empty())
	{ 
		// Find index to insert in _container
		index = _search_index(c, *(second_c.begin()), 0, c.size());
		
		// Insert at the index in _container
		_insert(c, *(second_c.begin()), index);

		// Erase to clean _container of int pair
		second_c.erase(second_c.begin());
	}
};

// Recursivly divide by 2 to find index where to insert the value
template <typename T>
int	 PmergeMe::_search_index(T &c, int value, int left, int right)
{
	if (abs(left - right) <= 1)
		return (left);
	
	int	mid = (left + right) / 2 - 1;
	
	if (value > c[mid].first)
		return (_search_index(c, value, mid + 1, right));
	else
		return (_search_index(c, value, left, mid));
};

template <typename T>
void	PmergeMe::_insert(T &c, int value, int index)
{
	std::pair<int, int>	pair;
	typename T::iterator insert_position = c.begin() + index;

	pair.first = value;
	pair.second = -1;

    if (value > c[index].first)
        insert_position = c.begin() + index + 1;
    c.insert(insert_position, pair);
};


//---------------   Utils   ---------------//

template <typename T>
void	PmergeMe::_fill_container(int argc, char **argv, T &c)
{
	std::pair<int, int>	pair;
	int					buffer;

	for (int i = 1; i < argc; i += 2)
	{	
		buffer = atol(argv[i]);
		if (buffer > INT_MAX)
			throw std::invalid_argument("error: `int` overflow");

		pair.first = buffer;
		
		if (i + 1 < argc)
		{	
			buffer = atol(argv[i + 1]);
			if (buffer > INT_MAX)
				throw std::invalid_argument("error: `int` overflow");
			pair.second = buffer;
		}
		else
			pair.second = -1;
		c.push_back(pair);
	}
}

std::vector<int>	PmergeMe::_create_vector_from_pair()
{
	std::vector<int>	res;
	
	for (std::vector<std::pair<int, int> >::iterator it = _vector.begin(); it != _vector.end(); it++)
	{
		if (it->second != -1)
			res.push_back(it->second);
	}
	return (res);
}

std::deque<int>	PmergeMe::_create_deque_from_pair()
{
	std::deque<int>		res;
	
	for (std::deque<std::pair<int, int> >::iterator it = _deque.begin(); it != _deque.end(); it++)
	{
		if (it->second != -1)
			res.push_back(it->second);
	}
	return (res);
}


//---------------   Print   ---------------//

void	PmergeMe::print_before(int argc, char **argv)
{
	std::cout << RED << "Before: ";
	for (int i = 1; i < argc; i++)
		std::cout << argv[i] << " ";
	std::cout << WHITE << std::endl;
}

void	PmergeMe::print_after()
{	
	std::cout << GREEN << "After: ";
	for (std::vector<std::pair<int, int> >::iterator it = _vector.begin(); it != _vector.end(); it++)
		std::cout << it->first << " ";
	std::cout << WHITE << std::endl;
}

void	PmergeMe::print_time_vector(int argc) 
{	
	std::cout << BLUE << "Time to process a range of " << argc - 1 << " elements with std::vector : " << _duration_vector << " us" << WHITE << std::endl;
}

void	PmergeMe::print_time_deque(int argc)
{
	std::cout << BLUE << "Time to process a range of " << argc - 1 << " elements with std::deque : " << _duration_deque << " us" << WHITE << std::endl;
}