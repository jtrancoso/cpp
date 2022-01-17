/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 12:42:00 by jtrancos          #+#    #+#             */
/*   Updated: 2022/01/17 15:10:04 by jtrancos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
//#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	this->_amount = initial_deposit;
	this->_accountIndex = Account::_nbAccounts;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout <<  "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
	this->_accountIndex++;
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

void Account::_displayTimestamp(void)
{
	time_t totaltime;
	struct tm *timeinfo;
	char buffer[18];

	time(&totaltime);
	timeinfo = localtime(&totaltime);
	strftime(buffer, 18, "[%Y%m%d_%I%M%S]", timeinfo);
	std::cout << buffer;
}

void Account::makeDeposit(int deposit)
{
	int prevAmount;

	this->_amount = prevAmount + deposit;
	this->_nbDeposits++;
	

}

int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void) //acabar luego, necesito los getters
{
	int total = 0
	int wd = 0;
	int dep = 0;
	
	for (int i = 0; i < _nbAccounts; i++)
	{
		total = total + this->_amount;
		dep = dep + this->_nbDeposits;
		wd = wd + this->_nbWithdrawals;
	}
}