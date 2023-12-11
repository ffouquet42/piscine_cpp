/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:13:38 by fllanet           #+#    #+#             */
/*   Updated: 2023/12/11 15:14:45 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//---------------   includes   ---------------//
# include "IMateriaSource.hpp"

//---------------   class   ---------------//
class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource &cpy);
		MateriaSource	&operator=(const MateriaSource &cpy);
		
		void		learnMateria(AMateria *m);
		AMateria*	createMateria(std::string const &type);

	private:
		AMateria	*_knownSpells[4];
};