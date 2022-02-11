/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:02:32 by jtrancos          #+#    #+#             */
/*   Updated: 2022/02/11 11:36:45 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>
#include <unistd.h>

int main()
{
	Bureaucrat		boss("Michael Scott", 1);
	Bureaucrat		assistant("Dwight Schrute", 40);
	Bureaucrat		temp("Ryan Howard", 150);

	try
	{
		PresidentialPardonForm pf("Jim Harper");		// 25, 5
		std::cout<< pf <<std::endl;
		pf.beSigned(boss);
		temp.executeForm(pf);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		RobotomyRequestForm rb("Kevin");				// 72, 45
		std::cout<< rb <<std::endl;

		rb.beSigned(assistant);
		assistant.executeForm(rb);
		boss.executeForm(rb);
		boss.executeForm(rb);
		temp.executeForm(rb);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		ShrubberyCreationForm sf("the_office");		// 145, 137
		std::cout<< sf <<std::endl;
		sf.beSigned(assistant);
		std::cout<< sf <<std::endl;
		assistant.executeForm(sf);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
}