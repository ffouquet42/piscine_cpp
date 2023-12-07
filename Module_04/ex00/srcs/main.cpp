/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 12:25:12 by fllanet           #+#    #+#             */
/*   Updated: 2023/12/07 18:19:29 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"

int main()
{	
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete meta, delete j, delete i;
	
	std::cout << std::endl;

	const WrongAnimal *wrongAnimal = new WrongAnimal();
	const WrongCat *wrongCat = new WrongCat();
	const WrongAnimal *wrongAniCat = new WrongCat();
	std::cout << wrongAnimal->getType() << " " << std::endl;
	std::cout << wrongCat->getType() << " " << std::endl;
	std::cout << wrongAniCat->getType() << " " << std::endl;
	wrongAnimal->makeSound();
	wrongCat->makeSound();
	wrongAniCat->makeSound();
	delete wrongAnimal, delete wrongCat, delete wrongAniCat;
	
	return (0);
}