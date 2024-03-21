/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 05:13:54 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/21 05:16:31 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//---------------   includes   ---------------//

# include <iostream>
# include <stack>


//---------------   class   ---------------//

template <typename T>
class MutantStack : public std::stack<T> {
	private:

	public:
		MutantStack() 			{};
		MutantStack(MutantStack const &obj) : MutantStack::stack(obj) {}
		virtual ~MutantStack()	{};

		MutantStack	&operator=(MutantStack const &rhs) {
			if (this != &rhs) {
				std::stack<T>::operator=(rhs);
			}
			return (*this);
		}

		typedef typename std::stack<T>::container_type::iterator 		iterator;
		typedef typename std::stack<T>::container_type::const_iterator	const_iterator;

		iterator		begin()				{ return(this->c.begin()); }
		const_iterator	begin()	const		{ return(this->c.begin()); }
		iterator		end()				{ return(this->c.end()); }
		const_iterator	end() const			{ return(this->c.end()); }
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