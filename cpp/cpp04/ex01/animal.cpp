/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 13:00:00 by pnolte            #+#    #+#             */
/*   Updated: 2023/05/06 15:08:36 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "animal.hpp"

Animal::Animal() : type("animal") {
    std::cout << "<・ )))><< animal default constructor (ˆ(oo)ˆ)" << std::endl;
}

Animal::Animal(const Animal &src) {
    std::cout << "<・ )))><< animal copy constructor (ˆ(oo)ˆ)" << std::endl;
    *this = src;
}

Animal::~Animal() {
    std::cout << "／(˃ᆺ˂)＼ animal deconstructor >^)))<～～" << std::endl;
}

Animal& Animal::operator = (const Animal &src) {
    if (this != &src) {
        std::cout << "<・ )))><< animal assignment operator (ˆ(oo)ˆ)" << std::endl;
        this->type = src.getType();
    }
    return *this;
}

std::string Animal::getType() const { return this->type; }

void Animal::makeSound() const {
    std::cout << " Animal  -> ???" << std::endl;
}

/* ************************************************************************** */
