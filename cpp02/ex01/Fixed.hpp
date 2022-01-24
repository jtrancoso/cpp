/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 13:50:53 by jtrancos          #+#    #+#             */
/*   Updated: 2022/01/24 13:57:32 by jtrancos         ###   ########.fr       */
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
		Fixed &operator=(const Fixed &other); 				//assignation operator overload
		int getRawBits(void) const;							//function members
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;

	private:
		int _fixedPoint;
		static const int _fractBits = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);