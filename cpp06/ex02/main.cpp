/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:14:19 by jtrancos          #+#    #+#             */
/*   Updated: 2022/02/14 16:27:57 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <unistd.h>

Base *generate(void)
{
	srand(time(NULL));
	int chance = (rand() % 3) + 1;
	Base *tmp;

	if (chance == 1)
		tmp = new A;
	else if (chance == 2)
		tmp = new B;
	else
		tmp = new C;
	return tmp;
}

void identify(Base *p)
{
	Base *tryA = dynamic_cast<A *>(p);
	Base *tryB = dynamic_cast<B *>(p);
	Base *tryC = dynamic_cast<C *>(p);
	if (tryA != NULL)
		std::cout << "A" << std::endl;
	if (tryB != NULL)
		std::cout << "B" << std::endl;
	if (tryC != NULL)
		std::cout << "C" << std::endl;
}

void identify(Base &p)
{
	try
	{
		Base tryA = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		return;
	}
	catch (std::bad_cast &bc)
	{
	}
	try
	{
		Base tryB = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		return;
	}
	catch (std::bad_cast &bc)
	{
	}
	try
	{
		Base tryC = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		return;
	}
	catch (std::bad_cast &bc)
	{
	}
}

int main()
{
	Base *tmp = generate();

	identify(tmp);
	identify(*tmp);
	
	delete tmp;
	return 0;
}