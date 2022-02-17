/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:02:32 by jtrancos          #+#    #+#             */
/*   Updated: 2022/02/17 16:20:59 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iostream>
#include <unistd.h>

int main()
{
	Bureaucrat		boss("Michael Scott", 1);
	Bureaucrat		assistant("Dwight Schrute", 40);
	Bureaucrat		temp("Ryan Howard", 150);
	Intern			randomIntern;

	try
	{
		Form *pf = randomIntern.makeForm("presidential request", "Jim Harper");		// 25, 5
		std::cout<< *pf <<std::endl;
		boss.signForm(*pf);
		boss.executeForm(*pf);
		delete pf;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Form *rr = randomIntern.makeForm("robotomy request", "Kevin");				// 72, 45
		std::cout<< *rr <<std::endl;

		boss.signForm(*rr);
		assistant.executeForm(*rr);
		boss.executeForm(*rr);
		boss.executeForm(*rr);
		temp.executeForm(*rr);
		delete rr;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Form *sc = randomIntern.makeForm("shrubbery request", "women_wc");			// 145, 137
		std::cout<< *sc <<std::endl;
		assistant.signForm(*sc);
		std::cout<< *sc <<std::endl;
		assistant.executeForm(*sc);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	try
	{
		Form *dm = randomIntern.makeForm("Dunder Mifflin request", "women_wc");			// 145, 137
		std::cout<< *dm <<std::endl;
		assistant.signForm(*dm);
		std::cout<< *dm <<std::endl;
		assistant.executeForm(*dm);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
}