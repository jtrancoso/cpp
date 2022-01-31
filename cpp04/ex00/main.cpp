/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 11:56:37 by jtrancos          #+#    #+#             */
/*   Updated: 2022/01/31 11:56:37 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	std::cout << meta->getType() << std::endl;
	j->makeSound();
	i->makeSound();
	meta->makeSound();

	delete (meta);
	delete (j);
	delete(i);

	const WrongAnimal *wrong = new WrongAnimal();
	const WrongAnimal *cat = new WrongCat();

	wrong->makeSound();
	cat->makeSound();
	std::cout << cat->getType() << std::endl;

	delete(wrong);
	delete(cat);

}