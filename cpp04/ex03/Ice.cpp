/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:56:31 by jtrancos          #+#    #+#             */
/*   Updated: 2022/02/03 16:51:11 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

Ice::Ice()
{
	std::cout << "Ice default constructor called" << std::endl;
	this->_type = "ice";
}

Ice::Ice(const Ice &copy)
{
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice default destructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &other)
{
	std::cout << "Ice assignment operator called" << std::endl;
	return *this;
}

Ice *Ice::clone()
{
	Ice *tmp = new Ice(*this);
	return tmp;
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.name << " *" << std::endl;
}