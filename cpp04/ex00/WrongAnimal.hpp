/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 12:27:39 by jtrancos          #+#    #+#             */
/*   Updated: 2022/01/31 12:27:39 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &copy);
		~WrongAnimal();
		WrongAnimal &operator=(const WrongAnimal &other);
		std::string getType() const;
		void makeSound() const;

	protected:
		std::string type;
};