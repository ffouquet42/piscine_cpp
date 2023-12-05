/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:13:38 by fllanet           #+#    #+#             */
/*   Updated: 2023/12/05 14:15:41 by fllanet          ###   ########.fr       */
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
		
		void		learnMateria(AMateria *m);
		AMateria	*createMateria(const std::string &type);

	private:
		AMateria	*_materias[4]; // ?
};