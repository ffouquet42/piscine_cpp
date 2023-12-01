/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 09:39:57 by fllanet           #+#    #+#             */
/*   Updated: 2023/12/01 11:13:43 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//---------------   includes   ---------------//
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

//---------------   class   ---------------//
class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		DiamondTrap();
		~DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap &cpy);
		DiamondTrap	&operator=(const DiamondTrap &cpy);
		
		void	attack(const std::string &target);
		void	whoAmI();

	private:
		std::string	_name;
};