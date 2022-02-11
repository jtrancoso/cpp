/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 11:39:04 by jtrancos          #+#    #+#             */
/*   Updated: 2022/02/11 12:59:46 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "Form.hpp"

class Intern;

struct toDoList
{
	std::string formName;
	Form *(Intern::*action)(std::string target) const;
};

class Intern
{
	public:
		Intern();
		Intern(const Intern &copy);
		~Intern();
		Form *makeForm(std::string name, std::string target);
		class UnknownFormException: public std::exception
		{
			public:
				const char *what() const throw();
		};

	private:
		toDoList actions[3];
		Intern &operator=(const Intern &other);
		Form *createShrubbery(std::string target) const;
		Form *createRobotomy(std::string target) const;
		Form *createPresidential(std::string target) const;
};