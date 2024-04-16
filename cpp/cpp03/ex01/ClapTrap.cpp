/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:19:26 by pnolte            #+#    #+#             */
/*   Updated: 2023/05/04 11:01:58 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "ClapTrap.hpp"


ClapTrap::ClapTrap(void)
    : name_("default"), hit_points_(10),
      energy_points_(10), attack_damage_(0) {
    std::cout << "ClapTrap Constructor built a new machine\n";
}

ClapTrap::ClapTrap(std::string name)
    : name_(name), hit_points_(10),
      energy_points_(10), attack_damage_(0) {
    std::cout << "ClapTrap Name Constructor built a new machine\n";
}

ClapTrap::ClapTrap(const ClapTrap &src) {
    std::cout << "A ClapTrap was created through cpoy construction\n";
    *this = src;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap deconstrucor destroyed it\n";
}

ClapTrap& ClapTrap::operator = (const ClapTrap &src) {
    if (this != &src) {
        std::cout << "ClapTrap copy assignment operattor used" << std::endl;
        this->name_ = src.name_;
        this->hit_points_ = src.hit_points_;
        this->energy_points_ = src.energy_points_;
        this->attack_damage_ = src.attack_damage_;
    }
    return *this;
}

int ClapTrap::getAttackDamage(void) { return this->attack_damage_; }

void ClapTrap::attack(const std::string& target) {
    if (this->hit_points_ <= 0)
        std::cout << "💀 " << this->name_ << " is dead R.I.P\n";
    else if (this->energy_points_ <= 0)
        std::cout << "🔋 " << this->name_
        << " feeling tired, maybe his battery run out of juice 🔋\n";
    else {
        std::cout << "🏑 " << this->name_
                  << " charges in, with his stick. It hits "
                  << target << std::endl;
        this->energy_points_--;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (this->hit_points_ <= 0) {
        std::cout << "😵 Even though " << this->name_
                  << " lays on the ground dead with " << this->hit_points_
                  << " hit points, the attacker keeps on massacring\n";
    }
    else if (amount == 0) {
        std::cout << "😅 The attack doesnt even seem to bother "
                  << this->name_ << ". It starts laughing\n";
    }
    else if (this->hit_points_ - (int)amount <= 0) {
        this->hit_points_ = 0;
        std::cout << "💀 " << this->name_ << " gets hit brutally "
                  << "and falls to the ground\n";
    }
    else if (this->hit_points_ - amount > 0) {
        this->hit_points_ -= amount;
        std::cout << "🔪 " << this->name_
                  << " gets hit for " << amount << " and now has "
                  << this->hit_points_ << ".\n";
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (this->hit_points_ <= 0)
        std::cout << "💀 " << this->name_ << " is dead R.I.P\n";
    else if (this->energy_points_ <= 0)
        std::cout << "🔋 " << this->name_
        << " feeling tired, maybe his battery run out of juice 🔋\n";
    else {
        hit_points_ += amount;
        std::cout << "🔩 " <<this->name_
                  << " takes out some wires and gears "
                  << "to repair himself by " << amount << std::endl;
        if (this->hit_points_ >= 10)
            std::cout << "🧰 He looks mighty fine again with his "
                      << hit_points_ << " hit points\n";
        else
            std::cout << "🧰 Now with " << this->hit_points_
                      << " hit points, he looks better.\n";
        energy_points_--;
    }
}

/* ************************************************************************** */
