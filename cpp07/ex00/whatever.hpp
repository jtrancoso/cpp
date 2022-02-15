/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 16:30:35 by jtrancos          #+#    #+#             */
/*   Updated: 2022/02/15 13:31:13 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
void swap(T &a, T &b)
{
	T aux;
	aux = a;
	a = b;
	b = aux;
}

template <typename T>
T max(T const &x, T const &y)
{
	if (y >= x)
		return y;
	else
		return x;
}

template <typename T>
T min(T const &x, T const &y)
{
	if (y <= x)
		return y;
	else
		return x;
}