/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:42:54 by jtrancos          #+#    #+#             */
/*   Updated: 2022/02/10 11:42:50 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "Form.hpp"

//sign 72, exec 45

class RobotomyRequestForm: public Form
{
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &copy);
		~RobotomyRequestForm();
		virtual void execute(Bureaucrat const &executor) const;

	private:
		RobotomyRequestForm();
		RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
};