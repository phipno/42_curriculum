/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 15:06:59 by pnolte            #+#    #+#             */
/*   Updated: 2023/04/26 17:00:52 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "Harl.hpp"

Harl::Harl() {
    this->sa_[0] = "DEBUG";
    this->sa_[1] = "INFO";
    this->sa_[2] = "WARNING";
    this->sa_[3] = "ERROR";

    this->fa_[0] = &Harl::debug;
    this->fa_[1] = &Harl::info;
    this->fa_[2] = &Harl::warning;
    this->fa_[3] = &Harl::error;
}

Harl::~Harl() {}

void    Harl::complain( std::string level ) {
    int index = 0;

    while (index < 4 && this->sa_[index].compare(level) != 0)
        index++;
    switch (index)
    {
        case 0:
            (this->*fa_[0])();
            break;
        case 1:
            (this->*fa_[1])();
            break;
        case 2:
            (this->*fa_[2])();
            break;
        case 3:
            (this->*fa_[3])();
            break;
        default:
            break;
    }
}

void Harl::debug(void) {
    std::cout << "I love having extra bacon for my"
                "7XL-double-cheese-triple-pickle-special-"
                "ketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
    std::cout << "I cannot believe adding extra bacon"
                " costs more money. You didn’t put enough"
                " bacon in my burger! If you did, I wouldn’t"
                " be asking for more!" << std::endl;
}

void Harl::warning(void) {
    std::cout << "I think I deserve to have some extra bacon"
                " for free. I’ve been coming for years"
                " whereas you started working here since"
                " last month." << std::endl;
}

void Harl::error(void) {
    std::cout << "This is unacceptable! I want to speak to "
                "the manager now." << std::endl;
}


/* ************************************************************************** */
