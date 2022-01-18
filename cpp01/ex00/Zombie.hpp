/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 12:13:13 by jtrancos          #+#    #+#             */
/*   Updated: 2022/01/18 16:30:41 by jtrancos         ###   ########.fr       */
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

Zombie* newZombie(std::string name);
void randomChump(std::string name);