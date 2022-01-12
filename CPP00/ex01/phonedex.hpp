/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonedex.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 12:10:58 by jtrancos          #+#    #+#             */
/*   Updated: 2022/01/12 12:50:58 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonedex.h"

class Phonedex
{
	private:
			Contact id[8];
			int		i;
			int		numofcontact;

	public:
			Phonedex();
			void addcontact();
			void search();
			void printcontact();
			int countcontact();
};

Phonedex::Phonedex() //te construye
{
	this->i = 0;
}

void Phonedex::addcontact()
{
	Contact contact;
	std::string input;

	std::cout << "Enter a name: ";
	std::cin.clear();
	std::getline(std::cin, input);
	contact.setname(input);
	std::cout << "Enter a last name: ";
	std::cin.clear();
	std::getline(std::cin, input);
	contact.setlastname(input);
	std::cout << "Enter a nickname: ";
	std::cin.clear();
	std::getline(std::cin, input);
	contact.setnickname(input);
	std::cout << "Enter a phone number: ";
	std::cin.clear();
	std::getline(std::cin, input);
	contact.setnumber(input);
	std::cout << "Reveal your darkest secret: ";
	std::cin.clear();
	std::getline(std::cin, input);
	contact.setsecret(input);
	this->id[this->i] = contact;
	if (this->i < 7)
		this->i++;
	else
		this->i = 0;
}

std::string namelenght(std::string name)
{
	if (name.length() > 10)
	{
		name = name.substr(0, 9) + '.';
		return name;
	}
	else
		return name;
}

int Phonedex::countcontact()
{
	int i;

	i = 0;
	while (!this->id[i].isEmpty() && i < 8)
		i++;
	return (i);
}

void Phonedex::printcontact()
{
	Contact contact;
	std::string name;
	int i;

	this->numofcontact = this->countcontact();
	if (this->numofcontact == 0)
		return ;
	std::cout << "LIST OF CONTACTS" << std::endl;
	std::cout << "----------------" << std::endl;
	for (i = 1; i <= this->numofcontact; i++)
	{
		contact = this->id[i - 1];
		std::cout << std::setw(10) << i << '|';
		name = contact.getname();
		name = namelenght(name);
		std::cout << std::setw(10) << name << '|';
		name = contact.getlastname();
		name = namelenght(name);
		std::cout << std::setw(10) << name << '|';
		name = contact.getnickname();
		name = namelenght(name);
		std::cout << std::setw(10) << name << std::endl;
	}
}

int isnumber(std::string str)
{
	for (int i = 0; i < str.length(); i++)
	{
		if (isdigit(str[i]) == 0)
			return 0;
	}
	return (1);

}

void Phonedex::search()
{
	Contact contact;
	std::string input;
	int index;

	printcontact();
	if (this->numofcontact == 0)
	{
		std::cout << "There are no contacts in the phonedex. Use ADD to create a contact entry" << std::endl;
		return ;
	}
	std::cout << "To expand contact information, enter a number: ";
	std::getline(std::cin, input);
	if (!isnumber(input))
	{
		std::cout << "Sorry, that was not a number" << std::endl;
		return ;
	}
	index = std::stoi(input);
	if (index <= numofcontact)
	{
		contact = this->id[index - 1];
		std::cout << "Name: " << contact.getname() << std::endl;
		std::cout << "Last Name: " << contact.getlastname() << std::endl;
		std::cout << "Nickname: " << contact.getnickname() << std::endl;
		std::cout << "Phone Number: " << contact.getnumber() << std::endl;
		std::cout << "Dark Secret(shhhh): " << contact.getsecret() << std::endl;
	}
}