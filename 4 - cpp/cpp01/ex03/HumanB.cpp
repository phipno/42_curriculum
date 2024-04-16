/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:52:47 by pnolte            #+#    #+#             */
/*   Updated: 2023/04/20 14:43:04 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB( std::string name) : name_(name), type_(NULL) {}

HumanB::~HumanB( void ) {}

void HumanB::setWeapon(Weapon &type) {
    this->type_ = &type;
}

void HumanB::attack( void ) {
    std::cout << this->name_ << " attacks with their ";
    std::cout << this->type_->getType() << std::endl;
}

/* ************************************************************************** */
