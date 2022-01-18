/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 12:13:15 by jtrancos          #+#    #+#             */
/*   Updated: 2022/01/18 16:31:34 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

void Zombie::announce(void) const
{
	std::cout << "<" << this->_name << "> " <<  "BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
	this->_name = name;
}

Zombie::~Zombie()
{
	std::cout << "Zombie <" << this->_name << "> has gone back to its grave" << std::endl;
}