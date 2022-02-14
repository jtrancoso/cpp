/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 12:10:36 by jtrancos          #+#    #+#             */
/*   Updated: 2022/02/14 13:31:43 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return 1;
	}

	double tmp = atof(argv[1]);

	if (tmp > std::numeric_limits<char>::max() || tmp < std::numeric_limits<char>::min() || tmp != tmp)
		std::cout << "char: impossible" << std::endl;
	else if (tmp < 32 || tmp > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(tmp) << "'" << std::endl;

	if (tmp > std::numeric_limits<int>::max() || tmp < std::numeric_limits<int>::min() || tmp != tmp)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(tmp) << std::endl;

	std::cout << std::fixed << std::setprecision(1);
	std::cout << "float: " << static_cast<float>(tmp) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(tmp) << std::endl;
	return 0;
}