/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 08:15:34 by fllanet           #+#    #+#             */
/*   Updated: 2023/11/28 09:01:40 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//---------------   includes   ---------------//
# include "Fixed.hpp"

//---------------   class   ---------------//
class Point
{
	public:
		Point();
		~Point();
		Point(float x, float y);
		Point(const Point &cpy);
		
		Point &operator=(const Point &cpy);

		Fixed	getx() const;
		Fixed	gety() const;

	private:
		Fixed	const _x;
		Fixed	const _y;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);