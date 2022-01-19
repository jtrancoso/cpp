/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 18:16:56 by jtrancos          #+#    #+#             */
/*   Updated: 2022/01/19 13:59:18 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "Weapon.hpp"

/* Pasamos puntero porque en el caso de B puede que no haya arma
   por lo que lo iniciamos en NULL */

class HumanB
{
	public:
		HumanB(std::string name);
		void setWeapon(Weapon &weapon);
		void attack();

	private:
		std::string _name;
		Weapon *_weapon;
};