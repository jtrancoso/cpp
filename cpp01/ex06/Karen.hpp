/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 12:39:41 by jtrancos          #+#    #+#             */
/*   Updated: 2022/01/21 12:59:16 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Karen;

struct actions
{
	std::string level;
	void (Karen::*action)();
};

class Karen
{
	public:
		void complain(std::string level);
		actions karenSays[4];
		Karen();

	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};