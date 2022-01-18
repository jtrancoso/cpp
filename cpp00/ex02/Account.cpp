/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtrancos <jtrancos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 12:42:00 by jtrancos          #+#    #+#             */
/*   Updated: 2022/01/17 18:09:55 by jtrancos         ###   ########.fr       */
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
	this->_accountIndex = _nbAccounts;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
	_nbAccounts++;
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	if (this->_accountIndex == 0)
		std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed";
	else
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
	int prevAmount = this->_amount;
	
	this->_amount = prevAmount + deposit;
	this->_nbDeposits++;
	this->_totalAmount += deposit;
	this->_totalNbDeposits++;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:" << prevAmount << ";deposit:" << deposit << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	int prevAmount = this->_amount;
	
	if (prevAmount - withdrawal < 0)
	{
		_displayTimestamp();
		std::cout << " index:" << this->_accountIndex << ";p_amount:" << prevAmount << ";withdrawal:refused" << std::endl;
		return (false);
	}
	this->_amount = prevAmount - withdrawal;
	this->_nbWithdrawals++;
	this->_totalAmount -= withdrawal;
	this->_totalNbWithdrawals++;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:" << prevAmount << ";withdrawal:" << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return (true);
}

int	Account::checkAmount(void) const
{
	return (this->_amount);
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << checkAmount() << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
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
	int nbAccounts = getNbAccounts();
	int totalAmount = getTotalAmount();
	int nbDeposits = getNbDeposits();
	int nbWithdrawals = getNbWithdrawals();

	_displayTimestamp();
	std::cout << " accounts:" << nbAccounts << ";total:" << totalAmount << ";deposits:" << nbDeposits << ";withdrawals:" << nbWithdrawals << std::endl;
}