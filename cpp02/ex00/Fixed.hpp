/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 13:50:53 by jtrancos          #+#    #+#             */
/*   Updated: 2022/01/21 17:20:05 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

// Canonical Form: constructor, copy constructor, overload and destructor

class Fixed
{
	public:
		Fixed(); //constructor
		~Fixed(); //destructor
		Fixed(const Fixed&); //copy constrctor
		Fixed &operator=(const Fixed &a); //overload

	private:

};