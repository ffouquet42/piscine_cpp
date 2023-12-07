/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:12:39 by fllanet           #+#    #+#             */
/*   Updated: 2023/12/07 16:33:57 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"
#include "../includes/Ice.hpp"
#include "../includes/Cure.hpp"
#include "../includes/Character.hpp"
#include "../includes/MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* player1 = new Character("player1");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	player1->equip(tmp);
	tmp = src->createMateria("cure");
	player1->equip(tmp);
	ICharacter* player2 = new Character("player2");
	player1->use(0, *player2);
	player1->use(1, *player2);
	delete player2;
	delete player1;
	delete src;
	return 0;
}