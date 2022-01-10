/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 11:56:04 by jtrancos          #+#    #+#             */
/*   Updated: 2022/01/10 12:48:20 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonedex.h"

class Contact
{	
	std::string name;
	std::string lastname;
	std::string nickname;
	std::string number;
	std::string secret;
	
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
};

void Contact::setname(std::string n){
	name = n;
}

std::string Contact::getname(){
	return name;
}

void Contact::setlastname(std::string ln){
	lastname = ln;
}

std::string Contact::getlastname(){
	return lastname;
}

void Contact::setnickname(std::string nn){
	nickname = nn;
}

std::string Contact::getnickname(){
	return nickname;
}

void Contact::setnumber(std::string nu){
	number = nu;
}

std::string Contact::getnumber(){
	return number;
}

void Contact::setsecret(std::string s){
	secret = s;
}

std::string Contact::getsecret(){
	return secret;
}
