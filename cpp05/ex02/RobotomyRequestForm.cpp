/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:43:10 by jtrancos          #+#    #+#             */
/*   Updated: 2022/02/10 13:23:48 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <unistd.h>
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form::Form("RobotomyRequestForm", 72, 45, target)
{
	std::cout << "Robotomy constructor called with target: " << target << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy): Form::Form(copy.getName(), copy.getGradeToSign(), copy.getGradeToExec(), copy.getTarget())
{
	std::cout << "Robotomy copy constructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	std::cout << "Robotomy assignment operator called" << std::endl;
	other.getName();
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Robotomy destructor called" << std::endl;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	sleep(rand() % 2 + 1);
	srand(time(0));
	int fifty = rand();
	this->beExecuted(executor);
	fifty %= 2;
	if (fifty != 0)
		std::cout << "** rizzz rizzz rizzzz... " << this->getTarget() << " has been robotomized 🤖" << std::endl;
	else
		std::cout << "** rizzz rizzz rizzzz... Robotomization of " << this->getTarget() << " failed 👻" << std::endl;
}