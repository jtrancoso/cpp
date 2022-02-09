/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 10:37:55 by jtrancos          #+#    #+#             */
/*   Updated: 2022/02/09 13:21:06 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <iostream>

Form::Form(): _name(""), _isSigned(false), _gradeToSign(1), _gradeToExec(1)
{
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string const name, int const gradeToSign, int const gradeToExec): _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
	if (this->_gradeToSign > 150 || this->_gradeToExec > 150)
		throw Form::GradeTooLowException();
	if (this->_gradeToSign < 1 || this->_gradeToSign < 1)
		throw Form::GradeTooHighException();
	std::cout << "Form <" << name << "> with GradeToSign <" << gradeToSign << "> constructor called" << std::endl;
}

Form::Form(std::string const name, int const gradeToSign, int const gradeToExec, std::string target): _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec), _target(target)
{
	if (this->_gradeToSign > 150 || this->_gradeToExec > 150)
		throw Form::GradeTooLowException();
	if (this->_gradeToSign < 1 || this->_gradeToSign < 1)
		throw Form::GradeTooHighException();
	std::cout << "Form <" << name << "> with GradeToSign <" << gradeToSign << "> constructor called" << std::endl;
}

Form::Form(const Form &copy): _name(copy._name), _isSigned(copy._isSigned), _gradeToSign(copy._gradeToSign), _gradeToExec(copy._gradeToExec)
{
	std::cout << "Form copy constructor called" << std::endl;
}

Form &Form::operator=(const Form &other)
{
	std::cout << "Form assignment operator called" << std::endl;
	if (this != &other)
		this->_isSigned = other._isSigned;
	return *this;
}

Form::~Form()
{
	std::cout << "Form <" << this->_name << "> destructor called" << std::endl;
}

std::string const Form::getName() const
{
	return this->_name;
}

int Form::getGradeToSign() const
{
	return this->_gradeToSign;
}

int Form::getGradeToExec() const
{
	return this->_gradeToExec;
}

bool Form::getIfSigned() const
{
	return this->_isSigned;
}

std::string Form::getTarget() const
{
	return this->_target;
}

void Form::beSigned(const Bureaucrat &other)
{
	if (other.getGrade() <= this->_gradeToSign)
		this->_isSigned = true;
	else
		throw Form::GradeTooLowException();
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

std::ostream &operator<<(std::ostream &out, const Form &other)
{
	out << "Form <" << other.getName() << "> grade to sign <" << other.getGradeToSign() << "> grade to exec <" << other.getGradeToExec() << ">";
	if (other.getIfSigned())
		out << ", is signed <true>";
	else
		out << ", is signed <false>";
	return (out);
}