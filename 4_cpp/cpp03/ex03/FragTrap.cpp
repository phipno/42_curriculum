/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 19:28:06 by pnolte            #+#    #+#             */
/*   Updated: 2023/05/06 18:27:49 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(void) {
    std::cout << "FragTrap Constructor upgraded a ClapTrap\n";
    this->hit_points_ = 100;
    this->energy_points_ = 100;
    this->attack_damage_ = 30;
}

FragTrap::FragTrap(std::string name) {
    std::cout << "FragTrap Name Constructor upgraded a ClapTrap\n";
    this->name_ = name;
    this->hit_points_ = 100;
    this->energy_points_ = 100;
    this->attack_damage_ = 30;
}

FragTrap::FragTrap(const FragTrap &src) {
    std::cout << "A FragTrap was built by copy construction\n";
    *this = src;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap was dismantled by deconstructor\n";
}

FragTrap& FragTrap::operator = (const FragTrap &src) {
   if (this != &src) {
        std::cout << "FragTrap copy assignment operattor used" << std::endl;
        this->name_ = src.name_;
        this->hit_points_ = src.hit_points_;
        this->energy_points_ = src.energy_points_;
        this->attack_damage_ = src.attack_damage_;
    }
    return *this;
}

void FragTrap::highFivesGuys(void) {
std::cout << "✋ " << this->name_ << "says: Secret handshake! BOTSSS ✋\n";
}

/* ************************************************************************** */
