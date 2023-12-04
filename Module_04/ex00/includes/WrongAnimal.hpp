/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 12:24:59 by fllanet           #+#    #+#             */
/*   Updated: 2023/12/04 13:45:44 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//---------------   includes   ---------------//
# include <iostream>

//---------------   class   ---------------//
class WrongAnimal
{
	public:
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(const WrongAnimal &cpy);
		WrongAnimal &operator=(const WrongAnimal &cpy);

		virtual void	makeSound() const;
		std::string		getType() const;

	protected:
		std::string _type;
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