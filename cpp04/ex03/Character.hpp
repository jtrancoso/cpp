/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:56:25 by jtrancos          #+#    #+#             */
/*   Updated: 2022/02/03 17:21:26 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "AMateria.hpp"

class ICharacter
{
	public:
		virtual ~ICharacter() {}
		virtual std::string const &getName() const = 0;
		virtual void equip(AMateria *m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter &target) = 0;
};

class Character: public ICharacter
{
	public:
		Character();
		Character(std::string name);
		virtual ~Character();
		Character(const Character &copy);
		Character &operator=(const Character &other);
		virtual std::string const &getName() const;
		virtual void equip(AMateria *m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter &target);
	
	private:
		AMateria *inventory[4];
		std::string _name;
};