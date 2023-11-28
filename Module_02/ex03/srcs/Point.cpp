/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 08:15:45 by fllanet           #+#    #+#             */
/*   Updated: 2023/11/28 09:13:19 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"
#include "../includes/Point.hpp"

Point::Point() : _x(Fixed(0)), _y(Fixed(0)) {}

Point::~Point() {}

Point::Point(float x, float y) : _x(x), _y(y) {}

Point::Point(const Point &cpy) : _x(cpy._x), _y(cpy._y) {}

Point &Point::operator=(const Point &cpy)
{
	if (this != &cpy)
	{
		this->~Point();
		new (this) Point(cpy); 
	}
	return (*this);
}

Fixed	Point::getx() const { return (this->_x); }

Fixed	Point::gety() const { return (this->_y); }