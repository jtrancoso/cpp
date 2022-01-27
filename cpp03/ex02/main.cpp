/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 17:01:30 by jtrancos          #+#    #+#             */
/*   Updated: 2022/01/27 18:31:57 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main ()
{
	ClapTrap clap;
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
	frag.highFivesGuys();

	return (0);
	
}