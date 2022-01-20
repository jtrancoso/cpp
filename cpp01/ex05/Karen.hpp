/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 13:45:03 by jtrancos          #+#    #+#             */
/*   Updated: 2022/01/20 16:58:36 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Karen
{
	public:
		void complain(std::string level);
		void (Karen::*x)();

	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};