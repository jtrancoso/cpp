/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 10:42:32 by jtrancos          #+#    #+#             */
/*   Updated: 2022/01/31 10:42:32 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"
#include <iostream>

Cat::Cat()
{
	this->type = "Cat";
	this->_brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &copy): Animal(copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->_brain = new Brain();
	*this->_brain = *copy._brain;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
}

Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		delete this->_brain;
		this->_brain = new Brain();
		*this->_brain = *other._brain;
		this->type = other.type;
		std::cout << "Cat assignment operator called" << std::endl;
	}
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Cat says: meow meow!" << std::endl;
}

Brain *Cat::getbrain()
{
	return this->_brain;
}