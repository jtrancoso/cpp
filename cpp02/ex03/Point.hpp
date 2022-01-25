/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 18:56:27 by jtrancos          #+#    #+#             */
/*   Updated: 2022/01/25 18:56:27 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Fixed.hpp"

class Point
{
	public:
		Point();
		Point(const float x, const float y);
		~Point();
		Point(const Point &copy);
		Point &operator=(const Point &other);
		Fixed getX() const;
		Fixed getY() const;

	private:
		Fixed const _x;
		Fixed const _y;
};