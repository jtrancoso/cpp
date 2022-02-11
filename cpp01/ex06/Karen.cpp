/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 12:39:43 by jtrancos          #+#    #+#             */
/*   Updated: 2022/02/11 12:31:26 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

Karen::Karen()
{
	this->karenSays[0].level = "DEBUG";
	this->karenSays[0].action = &Karen::debug;
	Karen::karenSays[1].level = "INFO";
	Karen::karenSays[1].action = &Karen::info;
	this->karenSays[2].level = "WARNING";
	this->karenSays[2].action = &Karen::warning;
	Karen::karenSays[3].level = "ERROR";
	Karen::karenSays[3].action = &Karen::error;
}

void Karen::debug()
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I always get my burger with extra tomato, two pickles and a bit of mustard" << std::endl;
}

void Karen::info()
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I can't believe I always have to remind the people here that the mustard must be on the top bread. It's not that difficult to remember" << std::endl;
}

void Karen::warning()
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I believe I deserve free fries and a soda. I'm a great costumer and after all this trouble is only fair to have some compesation for your mistake" << std::endl;
}

void Karen::error()
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager RIGHT NOW." << std::endl;
}

void Karen::complain(std::string level)
{
	int i = 0;

	for (i = 0; i < 4; i++)
	{
		if (level == this->karenSays[i].level)
			break;
	}
	switch(i)
	{
		case 0: (this->*karenSays[0].action)();
		case 1: (this->*karenSays[1].action)();
		case 2: (this->*karenSays[2].action)();
		case 3: (this->*karenSays[3].action)(); break;
		default: std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}