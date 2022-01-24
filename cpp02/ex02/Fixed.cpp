/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 13:50:51 by jtrancos          #+#    #+#             */
/*   Updated: 2022/01/24 17:27:55 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

//constructors

Fixed::Fixed(void) 
{
	this->_fixedPoint = 0;
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPoint = i << this->_fractBits;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPoint = roundf(f *(1 << this->_fractBits));
}

//destructor

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return;
}

//copy constructor

Fixed::Fixed(const Fixed &Copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = Copy;
	return;
}

//operator overloads

//assignment operator

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &other)
	{
		this->_fixedPoint = other.getRawBits();
	}
	return *this;
}

//comparison operators

bool &Fixed::operator>(const Fixed &other)
{
	if (this->_fixedPoint > &other._fixedPoint)
		return (true);
	return (false);
}

bool &Fixed::operator<(const Fixed &other)
{
	if (this->_fixedPoint < &other._fixedPoint)
		return (true);
	return (false);
}

bool &Fixed::operator>=(const Fixed &other)
{
	if (this->_fixedPoint >= &other._fixedPoint)
		return (true);
	return (false);
}

bool &Fixed::operator<=(const Fixed &other)
{
	if (this->_fixedPoint <= &other._fixedPoint)
		return (true);
	return (false);
}

bool &Fixed::operator==(const Fixed &other)
{
	if (this->_fixedPoint == &other._fixedPoint)
		return (true);
	return (false);
}

bool &Fixed::operator!=(const Fixed &other)
{
	if (this->_fixedPoint != &other._fixedPoint)
		return (true);
	return (false);
}

//arithmetic operators

Fixed &Fixed::operator+(const Fixed &other)
{
	return (this->_fixedPoint + &other._fixedPoint);
}

Fixed &Fixed::operator-(const Fixed &other)
{
	return (this->_fixedPoint - &other._fixedPoint);
}

Fixed &Fixed::operator*(const Fixed &other)
{
	return (this->_fixedPoint * &other._fixedPoint);
}

Fixed &Fixed::operator/(const Fixed &other)
{
	return (this->_fixedPoint / &other._fixedPoint);
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
	aux._fixedPoint += 1;
	return (aux);
}

Fixed Fixed::operator--(int)
{
	Fixed aux;
	aux = *this;
	aux._fixedPoint -= 1;
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

//function overload <<

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}