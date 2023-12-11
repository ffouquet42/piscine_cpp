/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:45:06 by fllanet           #+#    #+#             */
/*   Updated: 2023/12/11 15:14:32 by fllanet          ###   ########.fr       */
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
		~Character();
		Character(const Character &cpy);
		Character &operator=(const Character &cpy);

		std::string const	&getName() const;
		void 				equip(AMateria *m);
		void 				unequip(int idx);
		void 				use(int idx, ICharacter &target);

	private:
		std::string	_name;
		AMateria	*_inventorySpells[4];
		AMateria	*_droppedSpells[100];
};