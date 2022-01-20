/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 13:45:01 by jtrancos          #+#    #+#             */
/*   Updated: 2022/01/20 18:07:31 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

void Karen::debug()
{
	std::cout << "I always get my burger with extra tomato, two pickles and a bit of mustard" << std::endl;
}

void Karen::info()
{
	std::cout << "I can't believe I always have to remind the people here that the mustard must be on the top bread. It's not that difficult to remember" << std::endl;
}

void Karen::warning()
{
	std::cout << "I believe I deserve free fries and a soda. I'm a great costumer and after all this trouble is only fair to have some compesation for your mistake" << std::endl;
}

void Karen::error()
{
	std::cout << "This is unacceptable, I want to speak to the manager RIGHT NOW." << std::endl;
}

void Karen::complain(std::string level)
{
	
}