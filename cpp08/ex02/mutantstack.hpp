/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:44:10 by jtrancos          #+#    #+#             */
/*   Updated: 2022/02/17 13:59:51 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <stack>
#include <deque>

template<typename T>
class MutantStack: public std::stack<T, std::deque<T> >
{
	public:
		typedef typename std::deque<T>::iterator iterator;
		MutantStack<T>(){};
		MutantStack<T>(const MutantStack &copy)
		{
			*this = copy;
		};
		MutantStack<T> &operator=(const MutantStack &rhs)
		{
			if (this != &rhs)
				this->c = rhs.c;
			return *this;
		};
		~MutantStack<T>(){};
		iterator begin()
		{
			return this->c.begin();
		};
		iterator end()
		{
			return this->c.end();
		};
};