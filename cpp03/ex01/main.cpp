/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 17:01:30 by jtrancos          #+#    #+#             */
/*   Updated: 2022/01/27 13:08:31 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main ()
{
	ScavTrap npc1("Paco");
	//ClapTrap npc2("Juan");

	npc1.attack("Jose");
	npc1.takeDamage(7);
	npc1.beRepaired(100);
	npc1.guardGate();

	return (0);
	
}