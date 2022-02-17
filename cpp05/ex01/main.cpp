/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:02:32 by jtrancos          #+#    #+#             */
/*   Updated: 2022/02/17 16:13:17 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main()
{
try 
	{
		Form		form1("Paper Permit", 3, 5);
		Bureaucrat	boss("Michael Scott", 1);
		Bureaucrat	assistant("Dwight Schrute", 37);

		std::cout << form1 <<std::endl;

		assistant.signForm(form1);
		std::cout << form1 <<std::endl;

		boss.signForm(form1);
		std::cout << form1 <<std::endl;

		boss.signForm(form1);
	}
	catch(Form::GradeTooHighException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(Form::GradeTooLowException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}