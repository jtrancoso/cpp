/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:35:40 by jtrancos          #+#    #+#             */
/*   Updated: 2022/02/16 16:26:02 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>
#include <unistd.h>

int main()
{
	std::cout << "******* CASE 1: simple numbers *******" << std::endl;
	Span sp = Span(5);

	try
	{
		sp.addNumber(2);
		sp.addNumber(10);
		sp.addNumber(33);
		sp.addNumber(34);
		sp.addNumber(90);
		std::cout << "size:     " << sp.getSize() << std::endl;
		std::cout << "shortest: " << sp.shortestSpan() << std::endl;
		std::cout << "longest:  " << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "***** CASE 2: too many numbers *******" << std::endl;
	Span sp2 = Span(3);

	try
	{
		sp2.addNumber(2);
		sp2.addNumber(10);
		sp2.addNumber(33);
		sp2.addNumber(34);
		sp2.addNumber(90);
		std::cout << "size:     " << sp2.getSize() << std::endl;
		std::cout << "shortest: " << sp2.shortestSpan() << std::endl;
		std::cout << "longest:  " << sp2.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "**** CASE 3: not enough numbers ******" << std::endl;
	Span sp3 = Span(3);

	try
	{
		sp3.addNumber(2);
		std::cout << "size:     " << sp3.getSize() << std::endl;
		std::cout << "shortest: " << sp3.shortestSpan() << std::endl;
		std::cout << "longest:  " << sp3.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "**** CASE 4: a lot of numbers ******" << std::endl;
	std::vector<int> vector;
	srand(time(0));

	for (int i = 0; i < 10050; i++)
		vector.push_back(rand());
	Span sp4 = Span(10050);

	try
	{
		sp4.addRange(vector.begin(), vector.end());
	}
	catch(const std::exception e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		std::cout << "size:     " << sp4.getSize() << std::endl;
		std::cout << "shortest: " << sp4.shortestSpan() << std::endl;
		std::cout << "longest:  " << sp4.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}