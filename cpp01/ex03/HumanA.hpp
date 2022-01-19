/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:16:50 by jtrancos          #+#    #+#             */
/*   Updated: 2022/01/19 13:59:47 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "Weapon.hpp"

// Pasamos la referencia porque HumanA siempre tiene arma, nunca va a ser NULL

class HumanA
{
	public:
		void attack();
		HumanA(std::string name, Weapon &weapon);

	private:
		Weapon &_weapon;
		std::string _name;
};