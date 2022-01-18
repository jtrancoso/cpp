/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 12:11:17 by jtrancos          #+#    #+#             */
/*   Updated: 2022/01/18 16:39:04 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *Zombie1;
	Zombie *Zombie2;

	Zombie1 = newZombie("Juan Antonio");
	Zombie1->announce();
	randomChump("Gregory");
	randomChump("Miguel Angel");
	Zombie2 = newZombie("Paquito P");
	Zombie2->announce();
	delete Zombie2;
	delete Zombie1;
	return (0);
}