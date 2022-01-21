/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 13:45:06 by jtrancos          #+#    #+#             */
/*   Updated: 2022/01/21 12:22:12 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main()
{
	Karen Karen;
	
	Karen.complain("debug");
	Karen.complain("info");
	Karen.complain("debug");
	Karen.complain("warning");
	Karen.complain("debug");
	Karen.complain("error");
	Karen.complain("debug");
	Karen.complain("error");
	return (0);
}