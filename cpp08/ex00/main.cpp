/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:52:49 by jtrancos          #+#    #+#             */
/*   Updated: 2022/02/15 17:30:30 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int main()
{
	std::vector<int> vect;

	vect.push_back(2);
	vect.push_back(23);
	vect.push_back(34);
	vect.push_back(42);
	
	try
	{
		std::cout << easyfind(vect, 34) << " was found, easy" << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "Number not found" << std::endl;
	}
	try
	{
		std::cout << easyfind(vect, 42) << " was found, easy" << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << "Number not found" << std::endl;
	}
	try
	{
		std::cout << easyfind(vect, 255) << " was found, easy" << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << "Number not found" << std::endl;
	}

	std::list<int> list;

	list.push_back(34);
	list.push_back(23);
	list.push_back(88);
	list.push_back(42);
	
	try
	{
		std::cout << easyfind(list, 88) << " was found, easy" << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "Number not found" << std::endl;
	}
	try
	{
		std::cout << easyfind(list, 42) << " was found, easy" << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << "Number not found" << std::endl;
	}
	try
	{
		std::cout << easyfind(list, 255) << " was found, easy" << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << "Number not found" << std::endl;
	}
	return 0;
}