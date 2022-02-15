/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:36:18 by jtrancos          #+#    #+#             */
/*   Updated: 2022/02/15 16:22:54 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

void leakss()
{
	system("leaks test");
}

int main()
{
	try
	{
		Array<int> small;
		Array<int> big(6);

		std::cout << "Number of elements first array: " << small.size() << std::endl;
		std::cout << "Number of elements second array: " << big.size() << std::endl;

		big[0] = 4;
		big[1] = 8;
		big[2] = 15;
		big[3] = 16;
		big[4] = 23;
		big[5] = 42;

		Array<int> copy(big);
		small = big;
		std::cout << "Number of elements copy array: " << copy.size() << std::endl;
		std::cout << "Number of elements first array: " << small.size() << std::endl;
		for (int i = 0; i < big.size(); i++)
			std::cout << "big[" << i << "]: " << big[i] << std::endl;

		Array<char> charr(3);

		charr[0] = 'a';
		charr[1] = 'b';
		charr[2] = 'c';
		for (int i = 0; i < charr.size(); i++)
			std::cout << "charr[" << i << "]: " << charr[i] << std::endl;
		
	}
	catch(const std::exception& e)
	{
		std::cout << "Woops, you went over the array size" << std::endl;
	}
	//atexit(leakss);
	return 0;
}