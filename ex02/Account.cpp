/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 00:38:25 by laugarci          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/11/09 15:05:47 by laugarci         ###   ########.fr       */
=======
/*   Updated: 2023/11/09 14:41:33 by laugarci         ###   ########.fr       */
>>>>>>> c6c343f1640bf3596c2712eaea663cd46ba87172
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" <<  _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

void Account::_displayTimestamp(void)
{
    std::cout << "[19920104_091532] ";
}

void Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals  << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	int amount;

	amount = _amount;
	_amount += deposit;
	_nbDeposits++;
	_totalNbDeposits += _nbDeposits;
	_totalAmount += deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << amount << ";deposit:" << deposit << ";amount:" << amount + deposit << ";nb_deposits:" << _nbDeposits << std::endl;

}

bool	Account::makeWithdrawal(int withdrawal)
{
	int amount;

	amount = _amount;
	_displayTimestamp();
	if (withdrawal > amount)
	{
		std::cout << "index:" << _accountIndex << ";p_amount:" << amount << ";withdrawal:refused" << std::endl;
		return (false);
	}
	_totalNbWithdrawals++;
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	std::cout << "index:" << _accountIndex << ";p_amount:" << amount << ";withdrawal:" << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (true);
}

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}
int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}
int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}
int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}
