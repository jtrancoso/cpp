/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:56:29 by jtrancos          #+#    #+#             */
/*   Updated: 2022/02/03 16:51:42 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AMateria.hpp"

class Cure: public AMateria
{
	public:
		Cure(); 
		virtual ~Cure();
		Cure(const Cure &copy);
		Cure &operator=(const Cure &other);
		virtual Cure *clone();
		virtual void use(ICharacter &target);

	private:
		std::string _type;
};