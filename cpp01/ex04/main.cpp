/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:17:56 by jtrancos          #+#    #+#             */
/*   Updated: 2022/01/19 18:10:01 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

std::string replace(std::string line, std::string s1, std::string s2)
{

	return (s1);
}

int main(int argc, char **argv)
{
	std::ifstream srcFile;
	std::ofstream dstFile;
	std::string finalName;
	std::string fileName;
	std::string s1;
	std::string s2;
	std::string line;

	if (argc != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}
	else
	{
		fileName = argv[1];
		s1 = argv[2];
		s2 = argv[3];
		if (fileName.empty() || s1.empty() || s2.empty())
		{
			std::cout << "Please fill your strings" << std::endl;
			return (1);
		}
		srcFile.open(fileName);
		if (srcFile.is_open())
		{
			finalName = fileName.append(".replace");
			dstFile.open(finalName);
			if (dstFile.is_open())
			{
				while (!srcFile.eof())
				{
					std::getline(srcFile, line);
					line = replace(line, s1, s2);
					dstFile << line << std::endl;
				}
				dstFile.close();
			}
			else
			{
				std::cout << "Couldn't open the file, sorry" << std::endl;
				dstFile.close();
				return (1);
			}
			srcFile.close();
		}
		else
		{
			std::cout << "Couldn't open the file, sorry" << std::endl;
			srcFile.close();
			return (1);
		}
	}
	return (0);
	
}