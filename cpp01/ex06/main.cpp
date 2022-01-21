/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 12:39:39 by jtrancos          #+#    #+#             */
/*   Updated: 2022/01/21 13:39:34 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <cctype>

int main(int argc, char **argv)
{
	Karen Karen;
	
	if (argc == 2)
	{
		Karen.complain(argv[1]);
		return (0);
	}
	else
		std::cout << "Wrong argument number" << std::endl;
	return (1);
}