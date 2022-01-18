/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 12:13:13 by jtrancos          #+#    #+#             */
/*   Updated: 2022/01/18 12:30:55 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>

class Zombie
{
	public:

		void announce(void);
		void setName (std::string name);
		~Zombie (std::string name);

	private:
	
		std::string _name;
}

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif