/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:12:39 by fllanet           #+#    #+#             */
/*   Updated: 2023/12/11 14:08:21 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"
#include "../includes/Ice.hpp"
#include "../includes/Cure.hpp"
#include "../includes/Character.hpp"
#include "../includes/MateriaSource.hpp"

int main()
{
	// // Mandatory Tests
	// IMateriaSource* src = new MateriaSource();
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());
	// ICharacter* me = new Character("me");
	// AMateria* tmp;
	// tmp = src->createMateria("ice");
	// me->equip(tmp);
	// tmp = src->createMateria("cure");
	// me->equip(tmp);
	// ICharacter* bob = new Character("bob");
	// me->use(0, *bob);
	// me->use(1, *bob);
	// delete bob;
	// delete me;
	// delete src;

	std::cout << std::endl;
	std::cout << "--------------------" << std::endl;
	std::cout << std::endl;
	
	// Additionals Tests
	
	/* Cree une materiaSource et apprend Ice et Cure */
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	/* Cree un personnage */
	ICharacter *carl = new Character("Carl");

	/* Cree des Materia Ice et Cure, et les equipe au personnage */
	AMateria *to_free = src->createMateria("ice");
	carl->equip(to_free);
	carl->equip(src->createMateria("ice"));
	carl->equip(src->createMateria("cure"));
	carl->equip(src->createMateria("cure"));
	
	/* Une cinquieme materia ne peut etre equiper */
	AMateria *ice = src->createMateria("ice");
	carl->equip(ice);
	delete ice;

	/* utilise les 4 spell de "Carl" sur "bob" */
	ICharacter* bob = new Character("bob");
	carl->use(0, *bob);
	carl->use(1, *bob);
	carl->use(2, *bob);
	carl->use(3, *bob);

	/* Utilisation d'un spell pas present dans l'inventaire du personnage */
	carl->use(5, *bob);

	/* Drop un spell au sol */
	carl->unequip(0);
	
	/* tente d'utiliser un spell inexistant */
	carl->use(0, *bob);

	/* equipe un spell et l'utilise*/
	carl->equip(src->createMateria("cure"));
	carl->use(0, *bob);


	delete to_free;
	delete bob;
	delete carl;
	delete src;
	return (0);
}