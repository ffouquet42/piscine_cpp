/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 08:15:37 by fllanet           #+#    #+#             */
/*   Updated: 2023/11/28 11:10:04 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"
#include "../includes/Point.hpp"

Fixed	vector(Point const a, Point const b, Point const point)
{
	return (((a.getx() - point.getx()) * (b.gety() - point.gety())) - ((a.gety() - point.gety()) * (b.getx() - point.getx())));
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	edge1 = vector(a, b, point);
	Fixed	edge2 = vector(b, c, point);
	Fixed	edge3 = vector(c, a, point);

	return ((edge1 > 0 && edge2 > 0 && edge3 > 0) || (edge1 < 0 && edge2 < 0 && edge3 < 0));
}