/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:01:28 by fllanet           #+#    #+#             */
/*   Updated: 2023/12/05 14:03:24 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//---------------   includes   ---------------//
# include <iostream>
# include "AMateria.hpp"

//---------------   class   ---------------//
class Cure : public AMateria
{
	public:
		Cure();
		~Cure();
		Cure(const Cure &cpy);
		Cure &operator=(const Cure &cpy);
		
		Cure *clone() const;
		void use(ICharacter &target);
};
