/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 13:50:51 by jtrancos          #+#    #+#             */
/*   Updated: 2022/01/26 16:57:10 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

//constructors

Fixed::Fixed(void) 
{
	this->_fixedPoint = 0;
	return;
}

Fixed::Fixed(const int i)
{
	this->_fixedPoint = i << this->_fractBits;
}

Fixed::Fixed(const float f)
{
	this->_fixedPoint = roundf(f *(1 << this->_fractBits));
}

//destructor

Fixed::~Fixed(void)
{
	return;
}

//copy constructor

Fixed::Fixed(const Fixed &Copy)
{
	*this = Copy;
	return;
}

//operator overloads

//assignment operator

Fixed &Fixed::operator=(const Fixed &other)
{
	if (this != &other)
		this->_fixedPoint = other.getRawBits();
	return *this;
}

//comparison operators

bool Fixed::operator>(const Fixed &other)
{
	if (this->_fixedPoint > other._fixedPoint)
		return (true);
	return (false);
}

bool Fixed::operator<(const Fixed &other)
{
	if (this->_fixedPoint < other._fixedPoint)
		return (true);
	return (false);
}

bool Fixed::operator>=(const Fixed &other)
{
	if (this->_fixedPoint >= other._fixedPoint)
		return (true);
	return (false);
}

bool Fixed::operator<=(const Fixed &other)
{
	if (this->_fixedPoint <= other._fixedPoint)
		return (true);
	return (false);
}

bool Fixed::operator==(const Fixed &other)
{
	if (this->_fixedPoint == other._fixedPoint)
		return (true);
	return (false);
}

bool Fixed::operator!=(const Fixed &other)
{
	if (this->_fixedPoint != other._fixedPoint)
		return (true);
	return (false);
}

//arithmetic operators

Fixed &Fixed::operator+(const Fixed &other)
{
	this->_fixedPoint += other._fixedPoint;
	return *this;
}

Fixed &Fixed::operator-(const Fixed &other)
{
	this->_fixedPoint -= other._fixedPoint;
	return *this;
}

Fixed &Fixed::operator*(const Fixed &other)
{
	this->_fixedPoint *= other.toInt();
	return *this;
}

Fixed &Fixed::operator/(const Fixed &other)
{
	this->_fixedPoint /= other.toInt();
	return *this;
}

//prefix operators

Fixed &Fixed::operator++(void)
{
	this->_fixedPoint += 1;
	return (*this);
}

Fixed &Fixed::operator--(void)
{
	this->_fixedPoint -= 1;
	return *this;
}

//postfix operators

Fixed Fixed::operator++(int)
{
	Fixed aux;
	aux = *this;
	this->_fixedPoint += 1;
	return (aux);
}

Fixed Fixed::operator--(int)
{
	Fixed aux;
	aux = *this;
	this->_fixedPoint -= 1;
	return (aux);
}

//member functions

int Fixed::getRawBits(void) const
{
	return (this->_fixedPoint);
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedPoint = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)this->_fixedPoint / (float)(1 << this->_fractBits));
}

int Fixed::toInt(void) const
{
	return (this->_fixedPoint >> this->_fractBits);
}

Fixed &Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1 < fixed2)
		return (fixed1);
	else
		return (fixed2);
}

Fixed &Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1 > fixed2)
		return (fixed1);
	else
		return (fixed2);
}

Fixed const &Fixed::min(const Fixed &fixed1, const Fixed &fixed2)
{
	if (fixed1._fixedPoint < fixed2._fixedPoint)
		return (fixed1);
	else
		return (fixed2);
}

Fixed const &Fixed::max(const Fixed &fixed1, const Fixed &fixed2)
{
	if (fixed1._fixedPoint > fixed2._fixedPoint)
		return (fixed1);
	else
		return (fixed2);
}

//function overload <<

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}