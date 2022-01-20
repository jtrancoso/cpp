/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 15:17:56 by jtrancos          #+#    #+#             */
/*   Updated: 2022/01/20 13:39:29 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int ft_error(std::string msg)
{
	std::cout << msg << std::endl;
	return (1);
}

std::string replace(std::string line, std::string s1, std::string s2)
{
	std::string aux;
	size_t found = line.find(s1);
	size_t pos = 0;

	while (found != std::string::npos)
	{
		aux += line.substr(pos, found - pos);
		aux += s2;
		pos = found + s1.length();
		found = line.find(s1, pos + 1);
	}
	aux += line.substr(pos, std::string::npos);
	return (aux);
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
		return (ft_error("Wrong number of arguments"));
	else
	{
		fileName = argv[1];
		s1 = argv[2];
		s2 = argv[3];
		if (fileName.empty() || s1.empty() || s2.empty())
			return (ft_error("Please fill your strings"));
		srcFile.open(fileName, std::ios::in);
		if (srcFile.is_open())
		{
			finalName = fileName.append(".replace");
			dstFile.open(finalName, std::ios::out);
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
				dstFile.close();
				return (ft_error("Couldn't open the file, sorry"));
			}
			srcFile.close();
		}
		else
		{
			srcFile.close();
			return (ft_error("Couldn't open the file, sorry"));
		}
	}
	return (0);
	
}