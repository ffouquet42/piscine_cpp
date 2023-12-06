/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 18:16:56 by fllanet           #+#    #+#             */
/*   Updated: 2023/12/06 11:59:24 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	_displayTimestamp();
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_amount = initial_deposit;
	_totalAmount = _totalAmount + _amount;
	std::cout << COLOR_ROYAL_BLUE << "index:" << _accountIndex << ";amount:" << _amount << ";created\n" << COLOR_WHITE;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << COLOR_MEDIUM_PURPLE << "index:" << _accountIndex << ";amount:" << _amount << ";closed\n" << COLOR_WHITE;
}

void Account::_displayTimestamp(void)
{
	time_t	local_time;
	char	timestamp[19];

	std::time(&local_time);
	std::strftime(timestamp, 19, "[%Y%m%d_%H%M%S] ", localtime(&local_time));
	std::cout << COLOR_YELLOW << timestamp << COLOR_WHITE;
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

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << COLOR_SKY_BLUE << "account:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawal:" << _totalNbWithdrawals << COLOR_WHITE << std::endl;
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount = _totalAmount + deposit;
	std::cout << COLOR_GREEN << "index:" << _accountIndex << ";p_amount:" << _amount << COLOR_WHITE;
	_amount = _amount + deposit;
	std::cout << COLOR_FOREST_GREEN << ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposit:" << _nbDeposits << COLOR_WHITE << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << COLOR_BRIGHT_RED << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:" << COLOR_WHITE;
	if (withdrawal <= _amount)
	{
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		_amount = _amount - withdrawal;
		_totalAmount = _totalAmount - withdrawal;
		std::cout << COLOR_BRIGHT_RED << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << COLOR_WHITE << std::endl;
		return (1);
	}
	else
		std::cout << COLOR_BRIGHT_RED << "refused" << COLOR_WHITE << std::endl;
	return (0);
}

int Account::checkAmount(void) const
{
	return (_amount);
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << COLOR_CYAN << "index:" << _accountIndex << ";amount:" << _amount << ";deposit:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << COLOR_WHITE << std::endl;
}