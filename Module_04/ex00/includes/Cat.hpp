/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 12:24:54 by fllanet           #+#    #+#             */
/*   Updated: 2023/12/04 13:51:37 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//---------------   includes   ---------------//
# include "Animal.hpp"

//---------------   class   ---------------//
class Cat : public Animal
{
	public:
		Cat();
		~Cat();
		Cat(const Cat &cpy);
		Cat &operator=(const Cat &cpy);

		void	makeSound() const;
};