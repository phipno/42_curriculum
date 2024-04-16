/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 16:53:31 by pnolte            #+#    #+#             */
/*   Updated: 2023/04/17 19:10:10 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <time.h>
#include <stdio.h>
#include <iostream>

#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _amount(initial_deposit) {
    Account::_displayTimestamp();
    _totalAmount += initial_deposit;
    _accountIndex = Account::getNbAccounts();
    _nbAccounts++;
    std::cout << " index:" << _accountIndex;
    std::cout << ";amount:" << _amount;
    std::cout << ";created" << std::endl;
}

Account::Account(void) {
    Account::_displayTimestamp();
    _accountIndex = Account::getNbAccounts();
    _nbAccounts++;
    _amount = 0;
    std::cout << " index:" << _accountIndex;
    std::cout << ";amount:" << _amount;
    std::cout << ";created" << std::endl;
}

Account::~Account(void) {
    Account::_displayTimestamp();
    std::cout << " index:" << _accountIndex;
    std::cout << ";amount:" << _amount;
    std::cout << ";closed" << std::endl;
}

int Account::getNbAccounts(void) { return Account::_nbAccounts; }

int Account::getTotalAmount(void) { return Account::_totalAmount; }

int Account::getNbDeposits(void) { return Account::_totalNbDeposits; }

int Account::getNbWithdrawals(void) { return Account::_totalNbWithdrawals; }

int Account::checkAmount(void) const { return Account::_amount; }

void Account::displayAccountsInfos(void) {
    Account::_displayTimestamp();
    std::cout << " accounts:" << Account::getNbAccounts();
    std::cout << ";total:" << Account::getTotalAmount();
    std::cout << ";deposits:" << Account::getNbDeposits();
    std::cout << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void Account::makeDeposit(int deposit) {
    Account::_displayTimestamp();
    std::cout << " index:" << _accountIndex;
    std::cout << ";p_amount:" << _amount;
    std::cout << ";deposit:" << deposit;
    _amount += deposit;
    _totalAmount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
    std::cout << ";amount:" << _amount;
    std::cout << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
    Account::_displayTimestamp();
    std::cout << " index:" << _accountIndex;
    std::cout << ";p_amount:" << _amount;
    if (_amount < withdrawal) {
        std::cout << ";withdrawal:refused" << std::endl;
        return false;
    }
    else {
        std::cout << ";withdrawal:" << withdrawal;
        _amount -= withdrawal;
        _totalAmount -= withdrawal;
        _nbWithdrawals++;
        _totalNbWithdrawals++;
        std::cout << ";amount:" << _amount;
        std::cout << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
        return true;
    }
}


void Account::displayStatus(void) const {
    Account::_displayTimestamp();
    std::cout << " index:" << _accountIndex;
    std::cout << ";amount:" << _amount;
    std::cout << ";deposits:" << _nbDeposits;
    std::cout << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void) {
    time_t      rawtime;
    struct tm   *timeinfo;
    char        buffer[42];

    time(&rawtime);
    timeinfo = localtime(&rawtime);
    strftime(buffer, 42, "[%Y%m%d_%H%M%S]", timeinfo);
    std::cout << buffer;
}

/* ************************************************************************** */
