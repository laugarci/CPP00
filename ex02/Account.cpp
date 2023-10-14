/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 00:38:25 by laugarci          #+#    #+#             */
/*   Updated: 2023/10/15 01:03:51 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

Account::Account(void) //constructor
{

}

Account::~Account(void) //destructor
{
//	std::cout << "index:" <<  _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

Account::Account( int initial_deposit )
{
}	

void	makeDeposit(int deposit)
{
	}

bool makeWithdrawal(int withdrawal)
{
}


void	Account::_displayTimestamp( void )
{
	std::cout << "[19920104_091532] ";
}
