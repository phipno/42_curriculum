/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 21:24:16 by pnolte            #+#    #+#             */
/*   Updated: 2023/04/19 15:15:11 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "Zombie.hpp"

Zombie::Zombie( void ) {}

Zombie::~Zombie( void ) {
    std::cout << this->name_ << ": Just died because of a lack of brains :(" << std::endl;
}

void Zombie::announce( void ) {
    std::cout << name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::SetName(std::string name) {
    this->name_ = name;
}

/* ************************************************************************** */
