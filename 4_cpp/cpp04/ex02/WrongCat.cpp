/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 15:13:23 by pnolte            #+#    #+#             */
/*   Updated: 2023/05/06 15:20:45 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "WrongCat.hpp"

WrongCat::WrongCat() {
    std::cout << "(=^･ω･^=)  wrongCat default constructor  ฅ(^◕ᴥ◕^)ฅ" << std::endl;
    type = "wrongCat";
}

WrongCat::WrongCat(const WrongCat &src) {
    std::cout << "(=^･ω･^=)  wrongCat copy constructor  ฅ(^◕ᴥ◕^)ฅ" << std::endl;
    *this = src;
}

WrongCat::~WrongCat() {
    std::cout << "(= ω = ) WrongCat deconstructor   ฅ(• O •)ฅ" << std::endl;
}

WrongCat& WrongCat::operator = (const WrongCat &src) {
    if (this != &src) {
        std::cout << "(=^･ω･^=)  WrongCat assignment operator  ฅ(^◕ᴥ◕^)ฅ" << std::endl;
        this->type = src.getType();
    }
    return *this;
}

void WrongCat::makeSound() const {
    std::cout << "(=⌒‿‿⌒=) -> meow" << std::endl;
}

/* ************************************************************************** */
