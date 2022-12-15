/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-oual <ael-oual@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 08:14:03 by ael-oual          #+#    #+#             */
/*   Updated: 2022/11/21 14:59:04 by ael-oual         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Account.hpp"
#include <unistd.h>
#include <fcntl.h>

int Account::getNbAccounts()
{
		return _nbAccounts;
}

int Account::getTotalAmount()
{
	return _totalAmount;
}

int Account::getNbDeposits()
{
	return _totalNbDeposits;
}

int Account::getNbWithdrawals()
{
	return _totalNbWithdrawals;
}
void Account:: _displayTimestamp( void )
{
	time_t now = time(0);
	tm *ltm = localtime(&now);
	std::cout << "[" << 1900 + ltm->tm_year;
	(1 + ltm->tm_mon < 10)? std::cout <<"0" << 1 + ltm->tm_mon:std::cout << 1 + ltm->tm_mon;
	std::cout << ltm->tm_mday;
	std::cout << "_";
	(ltm->tm_hour < 10)? std::cout <<"0" << ltm->tm_hour:std::cout << ltm->tm_hour;
	(ltm->tm_min < 10)? std::cout <<"0" << ltm->tm_min:std::cout << ltm->tm_min;
	(ltm->tm_sec < 10)? std::cout <<"0" << ltm->tm_sec:std::cout << ltm->tm_sec;
	std::cout << "]";
}

void	Account:: displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout<<
	" accounts:"<< getNbAccounts() << 
	";total:" << getTotalAmount() <<
	";deposits:" << getNbDeposits() << 
	";withdrawals:"<<getNbWithdrawals()<< "\n";
	// _nbAccounts = 0;
	_totalAmount = 0;
	_totalNbDeposits = 0;
	_totalNbWithdrawals = 0;
}

Account:: Account( int initial_deposit )
{
	_displayTimestamp();
	std::cout << 
	" index:" << _nbAccounts <<
	";amount:" << initial_deposit <<
	";created\n";
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbAccounts++;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalAmount += initial_deposit;
}

Account:: ~Account()
{
	_displayTimestamp();
	std::cout << 
	" index:" << _accountIndex <<
	";amount:" << _amount <<
	";closed\n";
}

 void Account:: makeDeposit( int deposit )
{
	_nbDeposits++;
	//_nbAccounts++;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex 
			  << ";p_amount:" << _amount
			  << ";deposit:" << deposit;
	_amount += deposit;
	_totalAmount += _amount;
	std::cout
	<< ";amount:" << _amount
	<< ";nb_deposits:" << _nbDeposits<<std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	//_nbAccounts++;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex 
			  << ";p_amount:" << &_amount
			  << ";withdrawal:";
	if (_amount - withdrawal < 0)
	{
			std::cout << "refused\n";
			_totalAmount += _amount;
			return false;
	}
	else
		std::cout << withdrawal;
	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalAmount += _amount;
	_totalNbWithdrawals++;
	std::cout
	<< ";amount:" << _amount
	<< ";nb_withdrawal:" << _nbWithdrawals<<std::endl;
	return true;
}

void	Account:: displayStatus() const
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex 
			  << ";amount:" << _amount
			  << ";deposit:" << _nbDeposits
			  << ";withdrawals:" << _nbWithdrawals<<std::endl;
}
