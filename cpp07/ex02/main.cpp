/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:36:18 by jtrancos          #+#    #+#             */
/*   Updated: 2022/02/18 12:37:40 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750

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
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
// 		std::cout << "number[" << i << "] " << numbers[i] << std::endl;
//     }
//     delete [] mirror;//
//     return 0;
// }