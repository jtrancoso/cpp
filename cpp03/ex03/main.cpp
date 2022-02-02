/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 17:01:30 by jtrancos          #+#    #+#             */
/*   Updated: 2022/02/02 10:31:43 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main ()
{
	/*ClapTrap clap;
	ClapTrap clap2("Claudio");
	ScavTrap scav("Paco");
	FragTrap frag("Francisco");
	//ClapTrap npc2("Juan");

	clap = clap2;

	clap.attack("dummy");
	clap.takeDamage(7);
	clap.beRepaired(100);

	scav.attack("masilla");
	scav.takeDamage(7);
	scav.beRepaired(100);
	scav.guardGate();

	frag.attack("juanito");
	frag.takeDamage(7);
	frag.beRepaired(100);
	frag.highFivesGuys();*/

	DiamondTrap dia("Juan");
	DiamondTrap dia2(dia);


	dia.attack("ese");
	dia.beRepaired(17);
	dia.guardGate();
	dia.highFivesGuys();
	dia.whoAmI();


	return (0);
	
}