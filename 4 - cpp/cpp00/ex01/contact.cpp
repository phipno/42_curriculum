/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 12:43:48 by pnolte            #+#    #+#             */
/*   Updated: 2023/04/14 18:56:26 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

#include <iostream>
#include <string>

Contact::Contact(void) {}

Contact::~Contact(void) {}

void Contact::AssignStr(void) {
    std::string line;

    std::cout << "First Name: ";
    std::getline(std::cin, line);
    this->first_name_ = line;
    std::cout << "Last Name: ";
    std::getline(std::cin, line);
    this->last_name_ = line;
    std::cout << "Nick Name: ";
    std::getline(std::cin, line);
    this->nick_name_ = line;
    std::cout << "Phone Number: ";
    std::getline(std::cin, line);
    this->phone_number_ = line;
    std::cout << "Darkest Secret: ";
    std::getline(std::cin, line);
    this->darkest_secret_ = line;
}

std::string Contact::GetStrFN() { return this->first_name_; }

std::string Contact::GetStrLN() { return this->last_name_; }

std::string Contact::GetStrNN() { return this->nick_name_; }

std::string Contact::GetStrPN() { return this->phone_number_; }

std::string Contact::GetStrDS() { return this->darkest_secret_; }

/* ************************************************************************** */
