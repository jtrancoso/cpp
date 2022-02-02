/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:03:13 by jtrancos          #+#    #+#             */
/*   Updated: 2022/02/02 17:53:15 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"
#include "brain.hpp"
#include "cat.hpp"
#include "dog.hpp"

int main()
{
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	delete j;
	delete i;
	system("leaks test");
	/*const Animal *animals[4];
	for (int i = 0; i < 4; i++)
	{
		if (i % 2 == 0 || i == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	for (int i = 0; i < 4; i++)
		delete animals[i];*/
	return (0);

	
}