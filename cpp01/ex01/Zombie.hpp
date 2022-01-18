/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:41:50 by jtrancos          #+#    #+#             */
/*   Updated: 2022/01/18 17:26:57 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Zombie
{
	public:

		void announce(void) const;
		void setName (std::string name);
		~Zombie (void);

	private:
	
		std::string _name;
};

Zombie *zombieHorde(int N, std::string name);