/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 13:50:53 by jtrancos          #+#    #+#             */
/*   Updated: 2022/01/26 16:55:21 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

// Canonical Form: constructor, copy constructor, overload and destructor

class Fixed
{
	public:
		Fixed(); //constructor
		~Fixed(); //destructor
		Fixed(const Fixed &Copy); //copy constrctor
		Fixed &operator=(const Fixed &other); //assignation operator overload
		int getRawBits(void) const;
		void setRawBits(int const raw);

	private:
		int _fixedPoint;
		static const int _fractBits = 8;
};