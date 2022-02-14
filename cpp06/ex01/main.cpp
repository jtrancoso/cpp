/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 13:35:24 by jtrancos          #+#    #+#             */
/*   Updated: 2022/02/14 14:03:51 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

struct Data
{
	int n;
};

uintptr_t serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main()
{
	Data test;

	test.n = 42;
	uintptr_t raw = serialize(&test);
	std::cout << raw << std::endl;
	Data *deserialized = deserialize(raw);
	std::cout << deserialized << std::endl;
	return 0;
}