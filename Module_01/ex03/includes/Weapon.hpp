/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:41:43 by fllanet           #+#    #+#             */
/*   Updated: 2023/10/19 13:44:09 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//---------------   includes   ---------------//
# include <iostream>

//---------------   class   ---------------//
class Weapon
{
	public:
		Weapon(std::string type);
		~Weapon();

		const std::string	&getType() const;
		void				setType(std::string type);
		
	private:
		std::string _type;
};