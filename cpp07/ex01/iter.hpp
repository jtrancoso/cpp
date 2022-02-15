/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 13:52:07 by jtrancos          #+#    #+#             */
/*   Updated: 2022/02/15 14:34:07 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template<typename T>
void iter(T const *array, int size, void (*function)(T const &)) 
{
	for (int i = 0; i < size; i++)
		function(array[i]);
}

template<typename T>
void iter(T *array, int size, void (*function)(T &)) //this one is to use modifier functions
{
	for (int i = 0; i < size; i++)
		function(array[i]);
}

template<typename T>
void print(T &x)
{
	std::cout << x << std::endl;
}

template<typename T>
void plusOne(T &x)
{
	x += 1;
}

template<typename T>
void toUpper(T &x)
{
	x -= 32;
}