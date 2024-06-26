/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                :+:      :+:    :+:   */
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
#include <stack>
#include <algorithm>
#include <exception>
#include <stdlib.h> 


//---------------   class   ---------------//

class RPN {
	public:
		RPN();
		~RPN();
		RPN(const RPN &cpy);	
		RPN	&operator=(const RPN &cpy);

		void	calcul(const std::string &input);
		
	private:
		std::stack<int>		_stack;
		
		bool	_is_valid_char(char c);
		bool	_is_operator(char c);
		void	_stack_operation(char sign);
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