/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:41:48 by jtrancos          #+#    #+#             */
/*   Updated: 2022/01/18 17:48:55 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie* newHorde;

	newHorde = zombieHorde(5, "Juan");
	for (int i = 0; i < 5; i++)
	{
		newHorde[i].announce();
	}
	delete [] newHorde;
	return (0);
}