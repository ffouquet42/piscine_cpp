/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 12:24:57 by fllanet           #+#    #+#             */
/*   Updated: 2023/12/04 16:20:03 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//---------------   includes   ---------------//
# include "Animal.hpp"
# include "Brain.hpp"

//---------------   class   ---------------//
class Dog : public Animal
{
	public:
		Dog();
		~Dog();
		Dog(const Dog &cpy);
		Dog &operator=(const Dog &cpy);

		void	makeSound() const;

	private:
		Brain *_brain;
};