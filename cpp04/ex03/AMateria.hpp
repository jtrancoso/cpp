/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:56:20 by jtrancos          #+#    #+#             */
/*   Updated: 2022/02/03 16:08:57 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class AMateria
{
	public:
		AMateria();
		virtual ~AMateria();
		AMateria(std::string const &type);
		AMateria(const AMateria &copy);
		AMateria &operator=(const AMateria &other);
		std::string const &getType() const; //returns the materia type
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);

	protected:
		std::string const &_type;
};