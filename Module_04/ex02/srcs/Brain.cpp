/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 14:30:09 by fllanet           #+#    #+#             */
/*   Updated: 2023/12/04 16:33:40 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain()
{
	std::cout << GREEN << "Brain : Constructor called" << WHITE << std::endl;
}

Brain::~Brain()
{
	std::cout << RED << "Brain : Destructor called" << WHITE << std::endl;
}

Brain::Brain(const Brain &cpy)
{
	std::cout << GREEN << "Brain : Constructor called" << WHITE << std::endl;
	*this = cpy;
}

Brain &Brain::operator=(const Brain &cpy)
{
	std::cout << GREEN << "Brain : Constructor called" << WHITE << std::endl;
	for (int i = 0; i < 100 && !cpy._ideas[i].empty(); i++)
		this->_ideas[i] = cpy._ideas[i];
	return (*this);
}