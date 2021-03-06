/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:56:34 by jtrancos          #+#    #+#             */
/*   Updated: 2022/02/07 15:43:40 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Ice: public AMateria
{
	public:
		Ice();
		virtual ~Ice();
		Ice(const Ice &);
		Ice &operator=(const Ice &);
		virtual AMateria *clone() const;
		virtual void use(ICharacter &target);

	private:
		std::string _type;
};