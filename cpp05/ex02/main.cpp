/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:02:32 by jtrancos          #+#    #+#             */
/*   Updated: 2022/02/08 15:34:07 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main()
{
try 
	{
		Form		form1("Papelote", 3, 5);
		Bureaucrat	bur1("Mortadelo", 10);
		Bureaucrat	bur2("Filemon", 1);

		std::cout << form1 <<std::endl;

		bur1.signForm(form1);
		std::cout << form1 <<std::endl;

		bur2.signForm(form1);
		std::cout << form1 <<std::endl;

		bur1.signForm(form1);
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