/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:35:34 by jtrancos          #+#    #+#             */
/*   Updated: 2022/02/16 16:13:49 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <algorithm>
#include <iostream>

Span::Span(unsigned int N): _size(N)
{
}

Span::Span(const Span &copy)
{
	*this = copy;
}

Span &Span::operator=(const Span &rhs)
{
	this->_size = rhs.getSize();
	if (this != &rhs)
		this->_elements = rhs._elements;
	return *this;
}

Span::~Span()
{
}

void Span::addNumber(unsigned int i)
{
	if (this->_elements.size() >= this->_size)
		throw Span::ItsFullException();
	else
		this->_elements.push_back(i);
}

void Span::addRange(std::vector<int>::iterator x, std::vector<int>::iterator y)
{
	for (std::vector<int>::iterator it = x; it != y; it++)
	{
		try
		{
			this->addNumber(*it);
		}
		catch(const std::exception& e)
		{
			throw;//std::cout << e.what() << std::endl;
		}
	}
}

unsigned int Span::getSize() const
{
	return this->_size;
}

int Span::shortestSpan()
{
	int shortest = INT_MAX;

	if (this->_elements.size() <= 1)
		throw Span::ImpossibleSpanException();
	std::sort(this->_elements.begin(), this->_elements.end());
	for (std::vector<int>::iterator it = this->_elements.begin(); it < this->_elements.end() - 1; it++)
	{
		int tmpSpan = *(it + 1) - *it;
		if (tmpSpan < shortest)
			shortest = tmpSpan;
	}
	return shortest;

}

int Span::longestSpan()
{
	if (this->_elements.size() <= 1)
		throw Span::ImpossibleSpanException();
	int largest = *std::max_element(this->_elements.begin(), this->_elements.end());
	int smallest = *std::min_element(this->_elements.begin(), this->_elements.end());
	return largest - smallest;
	
}


const char *Span::ItsFullException::what() const throw()
{
	return ("Size exceeded, try with a smaller number");
}

const char *Span::ImpossibleSpanException::what() const throw()
{
	return ("Impossible to find a span, try again");
}

