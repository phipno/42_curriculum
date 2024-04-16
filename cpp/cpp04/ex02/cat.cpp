/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 13:00:04 by pnolte            #+#    #+#             */
/*   Updated: 2023/05/08 10:47:00 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "cat.hpp"
#include "brain.hpp"

Cat::Cat() {
    std::cout << "(=^･ω･^=)  cat default constructor  ฅ(^◕ᴥ◕^)ฅ" << std::endl;
    type = "cat";
    this->myBrain = new Brain();
}

Cat::Cat(const Cat &src) {
    std::cout << "(=^･ω･^=)  cat copy constructor  ฅ(^◕ᴥ◕^)ฅ" << std::endl;
    *this = src;
    this->myBrain = new Brain(*src.myBrain);
}

Cat::~Cat() {
    std::cout << "(= ω = ) cat deconstructor   ฅ(• O •)ฅ" << std::endl;
    delete this->myBrain;
}

Cat& Cat::operator = (const Cat &src) {
    if (this != &src) {
        std::cout << "(=^･ω･^=)  cat assignment operator  ฅ(^◕ᴥ◕^)ฅ" << std::endl;
        this->type = src.getType();
        this->myBrain = src.myBrain;
    }
    return *this;
}

void Cat::makeSound() const {
    std::cout << "(=⌒‿‿⌒=) -> meow" << std::endl;
}

Brain* Cat::getBrain() { return this->myBrain; }

/* ************************************************************************** */
