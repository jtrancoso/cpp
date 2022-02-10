/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 13:25:06 by jtrancos          #+#    #+#             */
/*   Updated: 2022/02/10 13:34:59 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <unistd.h>
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form::Form("PresidentialPardonForm", 72, 45, target)
{
	std::cout << "PresidentialPardon constructor called with target: " << target << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy): Form::Form(copy.getName(), copy.getGradeToSign(), copy.getGradeToExec(), copy.getTarget())
{
	std::cout << "PresidentialPardon copy constructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	std::cout << "PresidentialPardon assignment operator called" << std::endl;
	other.getName();
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardon destructor called" << std::endl;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	this->beExecuted(executor);
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox 🌝" << std::endl;
}