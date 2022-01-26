/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 17:01:30 by jtrancos          #+#    #+#             */
/*   Updated: 2022/01/26 17:44:03 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main ()
{
	ClapTrap npc1("Manuel");
	ClapTrap npc2("Juan");

	npc1.attack("Juan");
	npc2.takeDamage(7);
	npc2.beRepaired(15);

	return (0);
	
}