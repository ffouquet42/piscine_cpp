/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 15:28:14 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/23 23:21:39 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//---------------   includes   ---------------//

# include <iostream>
# include <stdexcept>
# include <algorithm>
# include <vector>
# include <stack>
# include <list>


//---------------   templates   ---------------//

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() {};
		~MutantStack() {};
		MutantStack(MutantStack const &cpy) : MutantStack::stack(cpy) {}
		MutantStack &operator=(const MutantStack &cpy)
		{
			if (this != &cpy)
				std::stack<T>::operator=(cpy);
			return (*this);
		}

		typedef typename std::stack<T>::container_type::iterator		iterator;
		typedef typename std::stack<T>::container_type::const_iterator	const_iterator;
		
		iterator		begin()			{ return (this->c.begin()); }
		const_iterator	begin() const	{ return (this->c.begin()); }
		iterator		end()			{ return (this->c.end()); }
		const_iterator	end() 	const	{ return (this->c.end()); }

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