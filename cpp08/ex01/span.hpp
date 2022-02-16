/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 17:35:36 by jtrancos          #+#    #+#             */
/*   Updated: 2022/02/16 15:52:12 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <vector>

class Span
{
	public:
		Span(unsigned int N);
		Span(const Span &copy);
		Span &operator=(const Span &rhs);
		~Span();
		int shortestSpan();
		int longestSpan();
		void addNumber(unsigned int i);
		void addRange(std::vector<int>::iterator x, std::vector<int>::iterator y);
		unsigned int getSize() const;
		class ItsFullException: public std::exception
		{
			public:
				const char *what() const throw();
		};
		class ImpossibleSpanException: public std::exception
		{
			public:
				const char *what() const throw();
		};

	private:
		Span();
		std::vector<int> _elements;
		unsigned int _size;
};