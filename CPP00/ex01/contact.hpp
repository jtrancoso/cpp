/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 11:56:04 by jtrancos          #+#    #+#             */
/*   Updated: 2022/01/17 12:17:56 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonedex.h"

class Contact
{	
	public:
			void setname(std::string n);
			std::string getname();
			void setlastname(std::string ln);
			std::string getlastname();
			void setnickname(std::string nn);
			std::string getnickname();
			void setnumber(std::string nu);
			std::string getnumber();
			void setsecret(std::string s);
			std::string getsecret();
			bool isEmpty();

	private:
			std::string _name;
			std::string _lastname;
			std::string _nickname;
			std::string _number;
			std::string _secret;
};

bool Contact::isEmpty()
{
	if (this->_name.empty() && this->_lastname.empty() && this->_nickname.empty() && this->_number.empty() && this->_secret.empty())
		return (true);
	else
		return (false);
}

void Contact::setname(std::string n){
	_name = n;
}

std::string Contact::getname(){
	return _name;
}

void Contact::setlastname(std::string ln){
	_lastname = ln;
}

std::string Contact::getlastname(){
	return _lastname;
}

void Contact::setnickname(std::string nn){
	_nickname = nn;
}

std::string Contact::getnickname(){
	return _nickname;
}

void Contact::setnumber(std::string nu){
	_number = nu;
}

std::string Contact::getnumber(){
	return _number;
}

void Contact::setsecret(std::string s){
	_secret = s;
}

std::string Contact::getsecret(){
	return _secret;
}
