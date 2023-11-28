/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 08:15:37 by fllanet           #+#    #+#             */
/*   Updated: 2023/11/28 09:21:25 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"
#include "../includes/Point.hpp"

Fixed	vector(Point const a, Point const b, Point const point)
{
	return ( ((a.getx() - point.getx()) * (b.gety() - point.gety())) - ((a.gety() - point.gety()) * (b.getx() - point.getx())) );
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	w1 = vector(a, b, point);
	Fixed	w2 = vector(b, c, point);
	Fixed	w3 = vector(c, a, point);

	return ((w1 > 0 && w2 > 0 && w1 > 0) || (w1 < 0 && w2 < 0 && w1 < 0));
}