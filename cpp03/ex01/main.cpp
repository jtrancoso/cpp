/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 17:01:30 by jtrancos          #+#    #+#             */
/*   Updated: 2022/02/02 10:20:30 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main ()
{
	ScavTrap scav1("Scavvvv");
	ClapTrap clap1("Juan Jose");
	ScavTrap scav2(scav1);
	
	scav1.attack("Jose");
	scav1.takeDamage(7);
	scav1.beRepaired(100);
	scav1.guardGate();
	clap1.attack("a este");
	scav2.guardGate();

	return (0);
	
}