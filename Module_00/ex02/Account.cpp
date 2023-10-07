/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 18:16:56 by fllanet           #+#    #+#             */
/*   Updated: 2023/10/07 18:43:05 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) // constructor
{
	
}

Account::~Account(void) // destructor
{
	
}

void Account::_displayTimestamp(void) // display timestamp
{
	time_t	local_time;
	char	timestamp[19];

	std::time(&local_time);
	std::strftime(timestamp, 19, "[%Y%m%d_%H%M%S] ", localtime(&local_time));
	std::cout << timestamp;
}