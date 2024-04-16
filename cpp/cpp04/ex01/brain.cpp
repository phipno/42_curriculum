/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 15:37:37 by pnolte            #+#    #+#             */
/*   Updated: 2023/05/08 10:40:06 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "brain.hpp"

Brain::Brain() {
    std::cout << "🧠  🧠  🧠 Brain default constructor" << std::endl;
    ideas[0] = "brain activity";
}

Brain::Brain(const Brain &src) {
    std::cout << "Brain copy constructor" << std::endl;
    *this = src;
}

Brain::~Brain() {
    std::cout << "🧠  🧠   Brain deconstructor" << std::endl;
}

Brain& Brain::operator = (const Brain &src) {
    if (this != &src) {
        std::cout << "Brain assignment operator" << std::endl;
        for (int i = 0; i < 100; i++) {
            this->ideas[i] = src.ideas[i];
        }
    }
    return *this;
}

void Brain::setBrain(int i, std::string new_idea) {
    this->ideas[i] = new_idea;
}

std::string Brain::getIdea(int i) { return this->ideas[i]; }

/* ************************************************************************** */
