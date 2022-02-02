/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 10:42:35 by jtrancos          #+#    #+#             */
/*   Updated: 2022/01/31 10:42:35 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "animal.hpp"
#include "brain.hpp"

class Cat: public Animal
{
	public:
		Cat();
		Cat(const Cat &copy);
		virtual ~Cat();
		Cat &operator=(const Cat &other);
		virtual void makeSound() const;

	private:
		Brain *_Brain;
};