/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 13:35:24 by jtrancos          #+#    #+#             */
/*   Updated: 2022/02/14 15:11:36 by jtrancos         ###   ########.fr       */
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
	Data data;

	data.n = 42;
	uintptr_t serialized = serialize(&data);
	std::cout << "serialized:     " << serialized << std::endl;
	Data *deserialized = deserialize(serialized);
	std::cout << "deserialized:   " << deserialized << std::endl;
	std::cout << "original:       " << &data << std::endl;
	std::cout << "deserialized n: " << deserialized->n << std::endl;
	std::cout << "original:       " << data.n << std::endl;
	return 0;
}