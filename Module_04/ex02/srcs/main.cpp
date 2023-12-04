/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 12:25:12 by fllanet           #+#    #+#             */
/*   Updated: 2023/12/04 17:09:30 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/Brain.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;
	
	std::cout << std::endl;

	Animal* animals[100];

	for (int i = 0; i < 100; i++)
	{
		if (i < 50)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}
	
	for (int i = 0; i < 100; i++)
		animals[i]->makeSound();
	
	for (int i = 0; i < 100; i++)
		delete animals[i];

	std::cout << std::endl;

	// object of abstract class type "Animal" is not allowed:C/C++(322)
	// main.cpp(47, 9): function "Animal::makeSound" is a pure virtual function
	// Animal animal;
	
	return (0);
}