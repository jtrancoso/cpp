/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:52:05 by jtrancos          #+#    #+#             */
/*   Updated: 2022/02/18 12:30:35 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

int main()
{ 
	
	int arr[4] = {0, 1, 34, 67};
	char arr2[4] = {'a', 'b', 'c', 'd'};
	iter(arr, 4, print);
	iter(arr, 4, plusOne);
	iter(arr, 4, print);
	iter(arr2, 4, print);
	iter(arr2, 4, toUpper);
	iter(arr2, 4, print);
	return 0;
}