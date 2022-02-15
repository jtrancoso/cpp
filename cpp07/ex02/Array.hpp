/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:36:21 by jtrancos          #+#    #+#             */
/*   Updated: 2022/02/15 16:20:01 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template<typename T>
class Array
{
	public:
		Array(): _n(0)
		{
			this->_elements = new T[0];
		}
		Array(unsigned int n): _n(n)
		{
			this->_elements = new T[n];
		}
		Array(Array const &copy): _n(copy.size())
		{
			this->_elements = new T[this->_n];
			for (unsigned int i = 0; i < this->_n; i++)
				this->_elements[i] = copy._elements[i];
		}
		Array &operator=(Array const &rhs)
		{
			this->_n = rhs.size();
			delete [] this->_elements;
			this->_elements = new T[this->_n];
			for (unsigned int i = 0; i < this->_n; i++)
				this->_elements[i] = rhs._elements[i];
			return *this;
		}
		~Array()
		{
			delete [] this->_elements;
		}
		T &operator[](unsigned int i)
		{
			if (i >= this->_n)
				throw std::exception();
			else
				return this->_elements[i];
		}
		int size() const
		{
			return this->_n;
		}

	private:
		unsigned int _n;
		T *_elements;
};