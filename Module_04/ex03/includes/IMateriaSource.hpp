/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:10:32 by fllanet           #+#    #+#             */
/*   Updated: 2023/12/05 14:11:35 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//---------------   includes   ---------------//
# include "AMateria.hpp"

//---------------   class   ---------------//
class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		
		virtual void learnMateria(AMateria *m) = 0; // ?
		virtual AMateria *createMateria(const std::string &type) = 0; // ?
};