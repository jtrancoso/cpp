/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:43:18 by jtrancos          #+#    #+#             */
/*   Updated: 2022/02/10 13:25:47 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "Form.hpp"

//sign 25, exec 5

class PresidentialPardonForm: public Form
{
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &copy);
		~PresidentialPardonForm();
		virtual void execute(Bureaucrat const &executor) const;

	private:
		PresidentialPardonForm();
		PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
};