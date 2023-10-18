/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:41:41 by fllanet           #+#    #+#             */
/*   Updated: 2023/10/18 15:24:03 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//---------------   includes   ---------------//
# include "Weapon.hpp"
# include <iostream>

//---------------   class   ---------------//
class HumanB
{
	public:
		HumanB(std::string name);
		~HumanB();

		void setWeapon(Weapon &weapon);
		void attack();

	private:
		std::string _name;
		Weapon		*_weapon;
};

//---------------   colors   ---------------//
# define RED		"\x1B[31m"
# define GREEN		"\x1B[32m"
# define YELLOW		"\x1B[33m"
# define BLUE		"\x1B[34m"
# define MAGENTA	"\x1B[35m"
# define CYAN		"\x1B[36m"
# define WHITE		"\x1B[0m"