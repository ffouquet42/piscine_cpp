/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:06:53 by fllanet           #+#    #+#             */
/*   Updated: 2023/12/05 14:07:34 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//---------------   includes   ---------------//
# include <iostream>
# include "AMateria.hpp"

//---------------   class   ---------------//
class Ice : public AMateria
{
	public:
		Ice();
		~Ice();
		Ice(const Ice &cpy);
		Ice &operator=(const Ice &cpy);
		
		Ice *clone() const;
		void use(ICharacter &target);
};