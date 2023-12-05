/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 11:45:06 by fllanet           #+#    #+#             */
/*   Updated: 2023/12/05 12:11:09 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//---------------   includes   ---------------//
# include <iostream>
# include "ICharacter.hpp"

//---------------   class   ---------------//
class Character : public ICharacter
{
	public:
		~Character();
		Character(const std::string &name);
		Character(const Character &cpy);
		Character &operator=(const Character &cpy);
		
		std::string const	&getName() const; // 2 const (dans sujet) mais pk ?
		void				equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter &target);

	private:
		std::string	_name;
		AMateria	*_inventory[4];
		
		void	clearInventory();
		void	copyInventory(const Character &cpy);
};