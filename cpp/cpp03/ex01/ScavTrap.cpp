/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 16:07:34 by pnolte            #+#    #+#             */
/*   Updated: 2023/05/06 18:26:27 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(void) {
    std::cout << "ScavTrap Constructor upgraded a ClapTrap\n";
    this->name_ = "default";
    this->hit_points_ = 100;
    this->energy_points_ = 50;
    this->attack_damage_ = 20;
}

ScavTrap::ScavTrap(std::string name) {
    std::cout << "ScavTrap Name Constructor upgraded a ClapTrap\n";
    this->name_ = name;
    this->hit_points_ = 100;
    this->energy_points_ = 50;
    this->attack_damage_ = 20;
}

ScavTrap::ScavTrap(const ScavTrap &src) {
    std::cout << "A ScavTrap was built by copy construction\n";
    *this = src;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap was dismantled by deconstructor\n";
}

ScavTrap& ScavTrap::operator = (const ScavTrap &src) {
   if (this != &src) {
        std::cout << "ScavTrap copy assignment operattor used" << std::endl;
        this->name_ = src.name_;
        this->hit_points_ = src.hit_points_;
        this->energy_points_ = src.energy_points_;
        this->attack_damage_ = src.attack_damage_;
    }
    return *this;
}

void ScavTrap::attack(const std::string& target) {
    if (this->hit_points_ <= 0)
        std::cout << "💀 " << this->name_ << " is dead R.I.P\n";
    else if (this->energy_points_ <= 0)
        std::cout << "🔋 " << this->name_
        << " feeling tired, maybe his battery run out of juice 🔋\n";
    else {
        std::cout << "🗡️ " << this->name_
                  << " stabs, stabs, stabs and stabs "
                  << target << std::endl;
        this->energy_points_--;
    }
}

void ScavTrap::guardGate(void) {
    std::cout << "🧙 " << this->name_
              << " says: You shall not pass!🛡️\n";
}

/* ************************************************************************** */
