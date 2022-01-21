/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 13:45:03 by jtrancos          #+#    #+#             */
/*   Updated: 2022/01/21 12:17:16 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

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