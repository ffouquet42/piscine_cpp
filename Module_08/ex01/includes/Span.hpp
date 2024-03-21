/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 03:39:37 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/21 03:48:14 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//---------------   includes   ---------------//

# include <iostream>
# include <stdexcept>
# include <algorithm>
# include <vector>


//---------------   class   ---------------//

class Span
{
	public:
		// Span();
		Span(int n);
		virtual ~Span(); // virtual?
		Span(Span const &cpy);
		Span operator=(Span const &cpy);

		class InvalidSpan : public std::exception {
			public:
				const char *what() const throw();
		};

		void	addNumber(int n);
		void	addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);

		int		shortestSpan();
		int		longestSpan(); //

		std::vector<int>	getData();

	private:
		std::vector<int>	_data;
		int					_size;
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