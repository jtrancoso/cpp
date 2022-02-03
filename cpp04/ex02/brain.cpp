/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:03:04 by jtrancos          #+#    #+#             */
/*   Updated: 2022/02/02 17:42:33 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brain.hpp"
#include <iostream>

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	*this = copy;
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain &Brain::operator=(Brain const &other)
{
	std::cout << "Brain assignment operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	return *this;
}