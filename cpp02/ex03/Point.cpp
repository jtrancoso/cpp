/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 18:56:23 by jtrancos          #+#    #+#             */
/*   Updated: 2022/01/25 18:56:23 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): _x(0), _y(0)
{
}

Point::Point(const float x, const float y): _x(Fixed(x)), _y(Fixed(y))
{
}

Point::~Point()
{
	return;
}

Point::Point(const Point &copy)
{
	*this->_x = copy._x;
	*this->_y = copy._y;
	return;
}

Point &Point::operator=(const Point &other)
{
	if (this != &other)
	{
		this->_
	}
}

Fixed Point::getX()
{
	return (this->_x);
}

Fixed Point::getY()
{
	return (this->_y);
}