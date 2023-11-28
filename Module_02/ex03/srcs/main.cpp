/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 08:15:43 by fllanet           #+#    #+#             */
/*   Updated: 2023/11/28 10:48:24 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"
#include "../includes/Point.hpp"

int	main(void)
{
	Point	a;
	Point	b;
	Point	c;
	Point	p;

	std::cout << std::endl;

	// Test 1 : In => True
	a = Point(0.0f, 0.0f);
	b = Point(10.0f, 30.0f);
	c = Point(20.0f, 0.0f);
	p = Point(10.0f, 15.0f);
	std::cout << YELLOW << "Test 1 : Point inside the triangle" << WHITE << std::endl;
	std::cout << BLUE << "A = (" << a.getx() << "," << a.gety() << "), B = (" << b.getx() << "," << b.gety() << "), C = (" << c.getx() << "," << c.gety() << "), P = (" << p.getx() << "," << p.gety() << ")\n" << WHITE << "Should be  : "<< GREEN << "True" << WHITE << std::endl;
	
	if (bsp(a, b, c, p))
		std::cout << "BSP return : " << GREEN << "True" << WHITE << std::endl << std::endl;
	else
		std::cout << "BSP return : " << RED << "False" << WHITE << std::endl << std::endl;
	
	// Test 2 : Out => False
	a = Point(0.0f, 0.0f);
	b = Point(10.0f, 30.0f);
	c = Point(20.0f, 0.0f);
	p = Point(30.0f, 15.0f);
	std::cout << YELLOW << "Test 2 : Point outside the triangle" << WHITE << std::endl;
	std::cout << BLUE << "A = (" << a.getx() << "," << a.gety() << "), B = (" << b.getx() << "," << b.gety() << "), C = (" << c.getx() << "," << c.gety() << "), P = (" << p.getx() << "," << p.gety() << ")\n" << WHITE << "Should be  : "<< RED << "False" << WHITE << std::endl;
	
	if (bsp(a, b, c, p))
		std::cout << "BSP return : " << GREEN << "True" << WHITE << std::endl << std::endl;
	else
		std::cout << "BSP return : " << RED << "False" << WHITE << std::endl << std::endl;

	// Test 3 : Corner => False
	a = Point(0.0f, 0.0f);
	b = Point(10.0f, 30.0f);
	c = Point(20.0f, 0.0f);
	p = Point(10.0f, 30.0f);
	std::cout << YELLOW << "Test 3 : Point is a corner of the triangle" << WHITE << std::endl;
	std::cout << BLUE << "A = (" << a.getx() << "," << a.gety() << "), B = (" << b.getx() << "," << b.gety() << "), C = (" << c.getx() << "," << c.gety() << "), P = (" << p.getx() << "," << p.gety() << ")\n" << WHITE << "Should be  : "<< RED << "False" << WHITE << std::endl;
	
	if (bsp(a, b, c, p))
		std::cout << "BSP return : " << GREEN << "True" << WHITE << std::endl << std::endl;
	else
		std::cout << "BSP return : " << RED << "False" << WHITE << std::endl << std::endl;

	// Test 4 : Edge => False
	a = Point(0.0f, 0.0f);
	b = Point(0.0f, 30.0f);
	c = Point(20.0f, 0.0f);
	p = Point(0.0f, 10.0f);
	std::cout << YELLOW << "Test 4 : Point is an edge of the triangle" << WHITE << std::endl;
	std::cout << BLUE << "A = (" << a.getx() << "," << a.gety() << "), B = (" << b.getx() << "," << b.gety() << "), C = (" << c.getx() << "," << c.gety() << "), P = (" << p.getx() << "," << p.gety() << ")\n" << WHITE << "Should be  : "<< RED << "False" << WHITE << std::endl;
	
	if (bsp(a, b, c, p))
		std::cout << "BSP return : " << GREEN << "True" << WHITE << std::endl << std::endl;
	else
		std::cout << "BSP return : " << RED << "False" << WHITE << std::endl << std::endl;

	// Test 5 : In Pixel Perfect => True
	a = Point(0.0f, 0.0f);
	b = Point(0.0f, 30.0f);
	c = Point(20.0f, 0.0f);
	p = Point(0.1f, 0.1f);
	std::cout << YELLOW << "Test 5 : Point inside the triangle (Pixel Perfect)" << WHITE << std::endl;
	std::cout << BLUE << "A = (" << a.getx() << "," << a.gety() << "), B = (" << b.getx() << "," << b.gety() << "), C = (" << c.getx() << "," << c.gety() << "), P = (" << p.getx() << "," << p.gety() << ")\n" << WHITE << "Should be  : "<< GREEN << "True" << WHITE << std::endl;
	
	if (bsp(a, b, c, p))
		std::cout << "BSP return : " << GREEN << "True" << WHITE << std::endl << std::endl;
	else
		std::cout << "BSP return : " << RED << "False" << WHITE << std::endl << std::endl;
	
	// Test 6 : Out Pixel Perfect => False
	a = Point(0.0f, 0.0f);
	b = Point(20.0f, 30.0f);
	c = Point(20.0f, 0.0f);
	p = Point(20.1f, 0.1f);
	std::cout << YELLOW << "Test 6 : Point outside the triangle (Pixel Perfect)" << WHITE << std::endl;
	std::cout << BLUE << "A = (" << a.getx() << "," << a.gety() << "), B = (" << b.getx() << "," << b.gety() << "), C = (" << c.getx() << "," << c.gety() << "), P = (" << p.getx() << "," << p.gety() << ")\n" << WHITE << "Should be  : "<< RED << "False" << WHITE << std::endl;
	
	if (bsp(a, b, c, p))
		std::cout << "BSP return : " << GREEN << "True" << WHITE << std::endl << std::endl;
	else
		std::cout << "BSP return : " << RED << "False" << WHITE << std::endl << std::endl;
	
	return (0);
}