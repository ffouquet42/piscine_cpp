/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:12:39 by fllanet           #+#    #+#             */
/*   Updated: 2023/12/11 18:03:38 by fllanet          ###   ########.fr       */
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
	std::cout << std::endl;
	std::cout << YELLOW << "----- Mandatory Tests -----" << WHITE << std::endl;
	std::cout << std::endl;
	
	std::cout << MAGENTA << "# Create Materia Ice & Cure" << WHITE << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	std::cout << std::endl;
	std::cout << MAGENTA << "# Create New Character <me>" << WHITE << std::endl;
	ICharacter* me = new Character("me");
	
	std::cout << std::endl;
	std::cout << MAGENTA << "# Equip 2 spells" << WHITE << std::endl;
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	std::cout << std::endl;
	std::cout << MAGENTA << "# Create New Character <bob>" << WHITE << std::endl;
	ICharacter* bob = new Character("bob");
	
	std::cout << std::endl;
	std::cout << MAGENTA << "# Use 2 spells" << WHITE << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	
	
	// Additionals Tests
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << YELLOW << "----- Additionals Tests -----" << WHITE << std::endl;
	
	std::cout << std::endl;
	std::cout << MAGENTA << "# Add 2 more spells" << WHITE << std::endl;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	// LEAKS
	std::cout << std::endl;
	std::cout << MAGENTA << "# Try to add 5th spell" << WHITE << std::endl;
	me->equip(tmp);

	std::cout << std::endl;
	std::cout << MAGENTA << "# Use all spells" << WHITE << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);

	std::cout << std::endl;
	std::cout << MAGENTA << "# Try to use spell at index 4" << WHITE << std::endl;
	me->use(4, *bob);

	std::cout << std::endl;
	std::cout << MAGENTA << "# Drop spell at index 2 on the floor" << WHITE << std::endl;
	me->unequip(2);

	std::cout << std::endl;
	std::cout << MAGENTA << "# Try to use spell at index 2" << WHITE << std::endl;
	me->use(2, *bob);
	
	std::cout << std::endl;
	std::cout << MAGENTA << "# Equip new spell" << WHITE << std::endl;
	tmp = src->createMateria("ice");
	me->equip(tmp);

	std::cout << std::endl;
	std::cout << MAGENTA << "# Use spell at index 2" << WHITE << std::endl;
	me->use(2, *bob);
	
	std::cout << std::endl;
	std::cout << MAGENTA << "# Delete all" << WHITE << std::endl;
	delete bob;
	delete me;
	delete src;

	return (0);
}