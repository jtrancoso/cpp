/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 13:50:53 by jtrancos          #+#    #+#             */
/*   Updated: 2022/01/25 18:52:14 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

// Canonical Form: constructor, copy constructor, overload and destructor

class Fixed
{
	public:
		Fixed(); 											//constructors
		Fixed(const int i);
		Fixed(const float f);
		~Fixed(); 											//destructor
		Fixed(const Fixed &Copy); 							//copy constrctor
		Fixed &operator=(const Fixed &other); 				//assigment operator overload
		bool operator>(const Fixed &other);					//comparison operators
		bool operator<(const Fixed &other);
		bool operator>=(const Fixed &other);
		bool operator<=(const Fixed &other);
		bool operator==(const Fixed &other);
		bool operator!=(const Fixed &other);
		Fixed&operator+(const Fixed &other);				//arithmetic operators
		Fixed &operator-(const Fixed &other);
		Fixed &operator*(const Fixed &other);
		Fixed &operator/(const Fixed &other);
		Fixed &operator++(void);							//prefix operators
		Fixed &operator--(void);
		Fixed operator++(int);								//postfix operators
		Fixed operator--(int);
		int getRawBits(void) const;							//function members
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
		static Fixed &min(Fixed &fixed1, Fixed &fixed2);
		static Fixed &max(Fixed &fixed1, Fixed &fixed2);
		static const Fixed &min(const Fixed &fixed1, const Fixed &fixed2);
		static const Fixed &max(const Fixed &fixed1, const Fixed &fixed2);

	private:
		int _fixedPoint;
		static const int _fractBits = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);