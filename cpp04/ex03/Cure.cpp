/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:56:27 by jtrancos          #+#    #+#             */
/*   Updated: 2022/02/03 16:52:46 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure()
{
	std::cout << "Cure default constructor called" << std::endl;
	this->_type = "cure";
}

Cure::Cure(const Cure &copy)
{
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure default destructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &other)
{
	std::cout << "Cure assignment operator called" << std::endl;
	return *this;
}

Cure *Cure::clone()
{
	Cure *tmp = new Cure(*this);
	return tmp;
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.name << " wound *" << std::endl;
}