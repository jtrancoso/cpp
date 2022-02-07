/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:56:25 by jtrancos          #+#    #+#             */
/*   Updated: 2022/02/07 15:39:28 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"


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