/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 11:39:02 by jtrancos          #+#    #+#             */
/*   Updated: 2022/02/11 13:09:35 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

Intern::Intern()
{
	this->actions[0].formName = "shrubbery request";
	this->actions[0].action = &Intern::createShrubbery;
	this->actions[1].formName = "robotomy request";
	this->actions[1].action = &Intern::createRobotomy;
	this->actions[2].formName = "presidential request";
	this->actions[2].action = &Intern::createPresidential;
}

Intern::Intern(const Intern &copy)
{
	this->actions[0].formName = copy.actions[0].formName;
	this->actions[0].action = copy.actions[0].action;
	this->actions[1].formName = copy.actions[1].formName;
	this->actions[1].action =  copy.actions[1].action;
	this->actions[2].formName = copy.actions[2].formName;
	this->actions[2].action =  copy.actions[2].action;
}

Intern &Intern::operator=(const Intern &)
{
	return *this;
}

Intern::~Intern()
{
	
}

Form *Intern::createShrubbery(std::string target) const
{
	ShrubberyCreationForm *form = new ShrubberyCreationForm(target);
	return form;
}

Form *Intern::createRobotomy(std::string target) const
{
	RobotomyRequestForm *form = new RobotomyRequestForm(target);
	return form;
}

Form *Intern::createPresidential(std::string target) const
{
	PresidentialPardonForm *form = new PresidentialPardonForm(target);
	return form;
}

const char *Intern::UnknownFormException::what() const throw()
{
	return ("Our intern does not know that form yet, sorry");
}

Form *Intern::makeForm(std::string name, std::string target)
{
	for (int i = 0; i < 3; i++)
	{
		if (name == this->actions[i].formName)
		{
			std::cout << "Intern creates " << this->actions[i].formName << std::endl;
			return (this->*actions[i].action)(target);
		}
	}
	throw Intern::UnknownFormException();
	return NULL;
}