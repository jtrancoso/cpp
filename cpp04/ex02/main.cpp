/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:03:13 by jtrancos          #+#    #+#             */
/*   Updated: 2022/02/03 14:00:40 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"
#include "brain.hpp"
#include "cat.hpp"
#include "dog.hpp"
#include <iostream>

void leakss()
{
	system("leaks test");
}

int main()
{
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	delete j;
	delete i;
	
	const Animal *animals[4];
	for (int i = 0; i < 4; i++)
	{
		if (i % 2 == 0 || i == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	for (int i = 0; i < 4; i++)
		delete animals[i];
	Dog basic;
	{
		Dog tmp = basic;
		std::cout << tmp.getbrain() << std::endl;
	}
	std::cout << basic.getbrain() << std::endl;
	atexit(leakss);
	return (0);
}