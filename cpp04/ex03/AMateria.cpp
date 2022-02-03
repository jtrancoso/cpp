/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:56:18 by jtrancos          #+#    #+#             */
/*   Updated: 2022/02/03 16:32:26 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria()
{
	std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria default destructor called" << std::endl;
}

AMateria::AMateria(std::string const &type)
{
	std::cout << "AMateria constructor called" << std::endl;
	this->_type = type;
}

AMateria::AMateria(const AMateria &copy)
{
	*this = copy;
}

AMateria &AMateria::operator=(const AMateria &other)
{
	return *this;
}

std::string &AMateria::getType() const 
{
	return this->_type;
}