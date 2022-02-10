/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:02:32 by jtrancos          #+#    #+#             */
/*   Updated: 2022/02/10 13:33:28 by jtrancos         ###   ########.fr       */
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
	Bureaucrat		intern("Ryan Howard", 150);

	try
	{
		PresidentialPardonForm pf("Jim Harper");
		std::cout<< pf <<std::endl;
		pf.beSigned(boss);
		pf.execute(boss);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		RobotomyRequestForm rb("Kevin");
		std::cout<< rb <<std::endl;
		rb.beSigned(boss);
		rb.execute(assistant);
		rb.execute(boss);
		rb.execute(boss);
		rb.execute(boss);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}


	try
	{
		ShrubberyCreationForm shf("the_office");
		std::cout<< shf <<std::endl;
		shf.beSigned(boss);
		std::cout<< shf <<std::endl;
		shf.execute(assistant);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
}