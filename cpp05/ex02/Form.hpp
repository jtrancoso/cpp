/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 10:38:01 by jtrancos          #+#    #+#             */
/*   Updated: 2022/02/09 13:20:37 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"

class Form
{
	public:
		Form();
		Form(std::string const name, int const gradeToSign, int const gradeToExec, std::string target);
		Form(const Form &copy);
		Form &operator=(const Form &other);
		~Form();
		std::string const getName() const;
		int getGradeToSign() const;
		int getGradeToExec() const;
		bool getIfSigned() const;
		std::string getTarget() const;
		void beSigned(const Bureaucrat &other);
		virtual void action() = 0;
		class GradeTooHighException: public std::exception
		{
			public:
				const char *what() const throw();
		};
		class GradeTooLowException: public std::exception
		{
			public:
				const char *what() const throw();
		};

	private:
		std::string const _name;
		bool _isSigned;
		int const _gradeToSign;
		int const _gradeToExec;
		std::string _target;
};

std::ostream &operator<<(std::ostream &out, const Form &other);