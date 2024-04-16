/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 15:03:39 by pnolte            #+#    #+#             */
/*   Updated: 2023/05/06 15:32:06 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
    std::cout << "<・ )))><< WrongAnimal default constructor (ˆ(oo)ˆ)" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) {
    std::cout << "<・ )))><< WrongAnimal copy constructor (ˆ(oo)ˆ)" << std::endl;
    *this = src;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "／(˃ᆺ˂)＼ WrongAnimal deconstructor >^)))<～～" << std::endl;
}

WrongAnimal& WrongAnimal::operator = (const WrongAnimal &src) {
    if (this != &src) {
        std::cout << "<・ )))><< WrongAnimal assignment operator (ˆ(oo)ˆ)" << std::endl;
        this->type = src.getType();
    }
    return *this;
}

std::string WrongAnimal::getType() const { return this->type; }

void WrongAnimal::makeSound() const {
    std::cout << " WrongAnimal  -> ???" << std::endl;
}

/* ************************************************************************** */
