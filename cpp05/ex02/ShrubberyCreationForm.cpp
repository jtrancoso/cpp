/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:00:08 by jtrancos          #+#    #+#             */
/*   Updated: 2022/02/09 18:08:18 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form::Form("ShrubberyCreationForm", 145, 137, target)
{
	std::cout << "Shrubbery constructor called with target: " << target << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy): Form::Form(copy.getName(), copy.getGradeToSign(), copy.getGradeToExec(), copy.getTarget())
{
	std::cout << "Shrubbery copy constructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	std::cout << "Shrubbery assignment operator called" << std::endl;
	other.getName();
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Shrubbery destructor called" << std::endl;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	this->beExecuted(executor);
	std::string fileName = this->getTarget() + "_shrubbery";
	
	std::ofstream dstFile;
	dstFile.open(fileName);
	dstFile << "               ,@@@@@@@," << std::endl;
	dstFile << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
	dstFile << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
	dstFile << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
	dstFile << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
	dstFile << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
	dstFile << "   `&%\\ ` /%&'    |.|       \\ '|8'" << std::endl;
	dstFile << "       |o|        | |         | |" << std::endl;
	dstFile << "       |.|        | |         | |" << std::endl;
	dstFile << "    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;
	dstFile.close();
	std::cout << executor.getName() << " executed shrubbery form " << fileName << std::endl;
}