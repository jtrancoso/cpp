/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:17:09 by jtrancos          #+#    #+#             */
/*   Updated: 2022/01/19 13:11:36 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->_type = type;
}

std::string Weapon::getType(void) const
{
	std::string type = this->_type;
	return (type);
}

void Weapon::setType(std::string type)
{
	this->_type = type;
}