/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 17:18:57 by fllanet           #+#    #+#             */
/*   Updated: 2024/03/20 01:23:07 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Base.hpp"

Base *generate(void)
{
	Base *base = NULL;

	srand(time(NULL));
	int random_number = rand() % 3;
	std::cout << CYAN << "Random number: " << random_number << WHITE << std::endl;

	switch (random_number)
	{
	case 0:
		std::cout << YELLOW << "Creation: A" << WHITE << std::endl;
		base = new A;
		break;
	case 1:
		std::cout << YELLOW << "Creation: B" << WHITE << std::endl;
		base = new B;
		break;
	case 2:
		std::cout << YELLOW << "Creation: C" << WHITE << std::endl;
		base = new C;
		break;
	}
	return (base);
}

void identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << BLUE << "Identify(Base *p): A" << WHITE << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << BLUE << "Identify(Base *p): B" << WHITE << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << BLUE << "Identify(Base *p): C" << WHITE << std::endl;
	else
		std::cout << RED << "Identify(Base *p): NULL" << WHITE << std::endl;
}

void identify(Base &p)
{
	try {
		(void)dynamic_cast<A &>(p);
		std::cout << BLUE << "Identify(Base &p): A" << WHITE << std::endl;
		return;
	} catch(const std::exception &e) {}
	try {
		(void)dynamic_cast<B &>(p);
		std::cout <<  BLUE <<"Identify(Base &p): B" << WHITE << std::endl;
		return;
	} catch(const std::exception &e) {}
	try {
		(void)dynamic_cast<C &>(p);
		std::cout << BLUE << "Identify(Base &p): C" << WHITE << std::endl;
		return;
	} catch(const std::exception &e) { std::cout << RED << "Identify(Base &p): NULL" << WHITE << std::endl; }
}

int main(void)
{
	Base *ptr = generate();
	identify(ptr);
	identify(*ptr);
	return (delete ptr, 0);
}