/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:52:46 by jtrancos          #+#    #+#             */
/*   Updated: 2022/02/15 17:25:56 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <algorithm>

template<typename T>
const int &easyfind(T &container, int i)
{
	typename T::iterator it = std::find(container.begin(), container.end(), i);
	if (it == container.end())
		throw std::exception();
	else
		return *it;
}