/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:45:06 by fllanet           #+#    #+#             */
/*   Updated: 2023/12/11 13:36:50 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//---------------   includes   ---------------//
# include "ICharacter.hpp"

//---------------   class   ---------------//
class Character : public ICharacter
{
	public:
		Character(std::string name);
		virtual ~Character();
		Character(const Character &cpy);
		Character &operator=(const Character &cpy);

		virtual std::string const	&getName() const;
		virtual void 				equip(AMateria *m);
		virtual void 				unequip(int idx);
		virtual void 				use(int idx, ICharacter &target);

	private:
		std::string	_name;
		AMateria	*_inventorySpells[4];
};