/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonedex.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 13:19:23 by jtrancos          #+#    #+#             */
/*   Updated: 2022/01/18 11:12:32 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonedex.h"

int main()
{
	Phonedex phonedex;

	std::string	input;
	while (1)
	{
		std::cout << "Enter a command: ";
		std::getline(std::cin, input);
		if (input == "EXIT")
			return (0);
		if (input == "ADD")
			phonedex.addcontact();
		if (input == "SEARCH")
			phonedex.search();
	}
	return (0);
}