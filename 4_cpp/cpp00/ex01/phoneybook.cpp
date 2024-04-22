/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneybook.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 17:08:32 by pnolte            #+#    #+#             */
/*   Updated: 2023/04/15 16:42:42 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>

#include "phoneybook.hpp"
#include "contact.hpp"

static std::string TrimTheTrim(std::string str);


PhoneBook::PhoneBook(void) : index_(0), full_(false) {}

PhoneBook::~PhoneBook(void) {}

void PhoneBook::Add(PhoneBook *book) {
    book->contacts_[book->index_].AssignStr();
    book->index_++;
    if (book->index_ > 7) {
        book->full_ = true;
        book->index_ = 0;
    }
}

void PhoneBook::Search(PhoneBook book) {
    int i = 0;

    std::cout << "/-------------------------------------------\\\n";
    std::cout << "|   Entry  |First Name| Last Name| Nickname |\n";
    std::cout << "|-------------------------------------------|\n";

    while((i < book.index_ && book.full_ == false)
        || (i < 8 && book.full_ == true)) {
        std::cout << "|" << std::setfill(' ') << std::setw(10) << i;
        std::cout << "|" << TrimTheTrim(book.contacts_[i].GetStrFN());
        std::cout << "|" << TrimTheTrim(book.contacts_[i].GetStrLN());
        std::cout << "|" << TrimTheTrim(book.contacts_[i].GetStrNN()) << "|\n";
        if ((i + 1 < book.index_ && book.full_ == false)
            || (i < 7 && book.full_ == true))
            std::cout << "|-------------------------------------------|\n";
        i++;
    }
    std::cout << "\\-------------------------------------------/\n";
    DisplayDis(book);
}

void PhoneBook::DisplayDis(PhoneBook book){
    std::string line;
    int         i;

    std::cout << "🔎 For whom are you searching for, Master??? 🔎" << std::endl;
    std::cout << "Enter a Number from the Entry to get more Info: ";
    try {
        std::getline(std::cin, line);
        i = std::stoi(line, nullptr);
    }
    catch (std::exception) {}
    if (((i < book.index_ && book.full_ == false)
            || (i < 8 && book.full_ == true)) && i >= 0) {
        std::cout << "📇Index     : " << i << std::endl;
        std::cout << "🧑First Name: " << book.contacts_[i].GetStrFN() << std::endl;
        std::cout << "👪Last Name : " << book.contacts_[i].GetStrLN() << std::endl;
        std::cout << "📛NickName  : " << book.contacts_[i].GetStrNN() << std::endl;
        std::cout << "📞Telephon  : " << book.contacts_[i].GetStrPN() << std::endl;
        std::cout << "🦇NickName  : " << book.contacts_[i].GetStrDS() << std::endl;
    }
    else
        std::cout << "🥴 This doesnt exit Master 🥴" << std::endl;
}

static std::string TrimTheTrim(std::string str){
    int l = str.length();
    std::string new_str;

    if (l > 10) {
        new_str = str.substr(0, 10);
        new_str[9] = '.';
        return(new_str);
    }
    else if (l < 10) {
        new_str.insert(0, 10 - l, ' ');
        new_str = new_str + str;
        return (new_str);
    }
    return(str);
}

/* ************************************************************************** */
