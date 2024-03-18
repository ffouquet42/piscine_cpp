/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 00:27:11 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/18 02:30:55 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//---------------   includes   ---------------//
# include <iostream>


//---------------   templates   ---------------// + class ?
template <typename T>
class Array
{
	public:
		Array() : _arr(new T[0]), _len(0) {}
		Array(int n) : _arr(new T[n]), _len(n) {
			for (int i = 0; i < n; i++)
				_arr[i] = 0;
		}
		Array(Array const &cpy) : _arr(new T[cpy._len]), _len(cpy._len) {
			for (int i = 0; i < _len; i++)
				_arr[i] = cpy._arr[i];
		}
		~Array() { delete[] _arr; }

		Array<T> &operator=(Array<T> const &cpy) {
			if (this != &cpy)
			{
				delete[] _arr;
				_len = cpy._len;
				_arr =  new T[_len];
				for (int i = 0; i < _len; i++)
					_arr[i] = cpy._arr[i];
			}
			return (*this);
		}

		T &operator[](int index) {
			if (index >= _len)
				throw InvalidIndex();
			return (_arr[index]);
		}

		class InvalidIndex : public std::exception {
			const char *what() const throw() {
				return ("=> Invalid Index");
			}
		};

		int size() { return (_len); }

	private:
		T *_arr;
		int _len;
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