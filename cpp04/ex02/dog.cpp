/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 10:42:38 by jtrancos          #+#    #+#             */
/*   Updated: 2022/01/31 10:42:38 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"
#include <iostream>

Dog::Dog()
{
	this->type = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &copy): Animal(copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->_brain = new Brain();
	*this->_brain = *copy._brain;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
}

Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		delete this->_brain;
		this->_brain = new Brain();
		*this->_brain = *other._brain;
		this->type = other.type;
		std::cout << "Dog assignment operator called" << std::endl;
	}
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Dog says: woof woof!" << std::endl;
}

Brain *Dog::getbrain()
{
	return this->_brain;
}