/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 12:17:45 by jtrancos          #+#    #+#             */
/*   Updated: 2022/02/07 16:19:05 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->materia[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materia[i])
			delete this->materia[i];
		this->materia[i] = copy.materia[i]->clone();
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->materia[i])
				delete this->materia[i];
			this->materia[i] = other.materia[i]->clone();
		}
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materia[i])
			delete this->materia[i];
	}
}

void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->materia[i] == NULL)
		{
			this->materia[i] = m->clone();
			return;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	AMateria *newMateria;

	for (int i = 0; i < 4; i++)
	{
		if (this->materia[i] != NULL && this->materia[i]->getType() == type)
		{
			newMateria = this->materia[i]->clone();
			return newMateria;
		}
	}
	return 0;
}