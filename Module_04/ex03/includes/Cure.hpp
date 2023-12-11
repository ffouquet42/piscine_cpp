/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:01:28 by fllanet           #+#    #+#             */
/*   Updated: 2023/12/11 13:26:18 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//---------------   includes   ---------------//
# include "AMateria.hpp"

//---------------   class   ---------------//
class Cure : public AMateria
{
	public:
		Cure();
		virtual ~Cure();
		Cure(const Cure &cpy);
		Cure &operator=(const Cure &cpy);
		
		Cure *clone() const;
		void use(ICharacter &target);
};
