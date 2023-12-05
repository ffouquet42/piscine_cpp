/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:14:39 by fllanet           #+#    #+#             */
/*   Updated: 2023/12/05 11:48:23 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//---------------   includes   ---------------//
# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

//---------------   class   ---------------//
class AMateria
{
	public:
		AMateria();
		virtual ~AMateria() = 0;
		AMateria(std::string const &type);
		AMateria(const AMateria &cpy);
		AMateria &operator=(const AMateria &cpy);
		
		virtual AMateria *clone() const = 0; // clone ?
		virtual void use(Icharacter &target);
		std::string const &getType() const;

	protected:
		std::string	_type;
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