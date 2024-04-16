/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 13:00:34 by pnolte            #+#    #+#             */
/*   Updated: 2023/05/06 15:09:30 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "dog.hpp"

Dog::Dog() {
    std::cout << "U・ᴥ・U    dog default constructor  ∪･ω･∪" << std::endl;
    type = "dog";
}

Dog::Dog(const Dog &src) {
    std::cout << "U・ᴥ・U    dog copy constructor  ∪･ω･∪" << std::endl;
    *this = src;
}

Dog::~Dog() {
    std::cout << "∪￣-￣∪  dog deconstructor  ∪･ｪ･∪" << std::endl;
}

Dog& Dog::operator = (const Dog &src) {
    if (this != &src) {
        std::cout << "U・ᴥ・U  dog assignment operator  ∪･ω･∪" << std::endl;
        this->type = src.getType();
    }
    return *this;
}

void Dog::makeSound() const {
    std::cout << " ∪･ω･∪   -> wooof" << std::endl;
}

/* ************************************************************************** */
