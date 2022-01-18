/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 17:59:59 by jtrancos          #+#    #+#             */
/*   Updated: 2022/01/18 18:13:58 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << "Address in memory of the string                : " << &string << std::endl;
	std::cout << "Address in memory of the string using stringPTR: " << stringPTR << std::endl;
	std::cout << "Address in memory of the string using stringREF: " << &stringREF << std::endl << std::endl;
	std::cout << "String using stringPTR: " << *stringPTR << std::endl;
	std::cout << "String using stringREF: " << stringREF << std::endl;

	return (0);
}