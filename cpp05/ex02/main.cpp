/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:02:32 by jtrancos          #+#    #+#             */
/*   Updated: 2022/02/09 18:21:01 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

int main()
{
	Bureaucrat		hihi("hihi", 1);
	Bureaucrat		lool("lool", 40);
	Bureaucrat		haha("haha", 150);

	// try{
	// 	PresidentialPardonForm pf("28B");
	// 	std::cout<< pf <<std::endl;
	// 	pf.execute(hihi);
	// }
	// catch (std::exception &e){
	// 	std::cout << e.what() << std::endl;
	// }

	// try{
	// 	Form *f = new PresidentialPardonForm("28B");
	// 	f->execute(hihi);
	// 	delete f;
	// }
	// catch (std::exception &e){
	// 	std::cout << e.what() << std::endl;
	// }

	// try{
	// 	PresidentialPardonForm pf("28B");
	// 	pf.beSigned(hihi);
	// 	pf.execute(hihi);
	// }
	// catch (std::exception &e){
	// 	std::cout << e.what() << std::endl;
	// }


	// try{
	// 	RobotomyRequestForm rb("28B");
	// 	std::cout<< rb <<std::endl;
	// 	rb.beSigned(hihi);
	// 	rb.execute(hihi);
	// 	rb.execute(lool);
	// 	rb.execute(lool);
	// 	rb.execute(haha);
	// 	rb.execute(haha);
	// }
	// catch (std::exception &e){
	// 	std::cout << e.what() << std::endl;
	// }


	try
	{
		ShrubberyCreationForm shf("aaa");
		std::cout<< shf <<std::endl;
		shf.beSigned(hihi);
		std::cout<< shf <<std::endl;
		shf.execute(haha);
		//shf.execute(hihi);
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
}