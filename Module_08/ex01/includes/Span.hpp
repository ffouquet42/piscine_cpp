/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 15:28:14 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/23 04:35:32 by fllanet          ###   ########.fr       */
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
		Span();
		Span(unsigned int max);
		~Span();
		Span(const Span &cpy);
		Span &operator=(const Span &cpy);

		void	addNumber(unsigned int n);
		void	addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);

		unsigned int	shortestSpan();
		unsigned int	longestSpan();

		class SpanIsFull : public std::exception {
			public:
				const char *what() const throw() {
					return ("=> Span: Is full");
				};
		};
		
		class NotEnoughNumbers : public std::exception {
			public:
				const char *what() const throw() {
					return ("=> Span: Not enough numbers");
				};
		};

	private:
		std::vector<int>	_vec;
		unsigned int		_max;
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