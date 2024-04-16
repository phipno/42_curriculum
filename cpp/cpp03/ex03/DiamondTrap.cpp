/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 11:06:58 by pnolte            #+#    #+#             */
/*   Updated: 2023/05/06 18:22:58 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap(void)
    : ClapTrap("default_clab_name"), ScavTrap("default"), FragTrap("default") {
    std::cout << "DiamondTrap Constructor fused a ScavTrap and a FragTrap\n";
    this->name_ = "default";
    this->hit_points_ = FragTrap::hit_points_;
    this->energy_points_ = ScavTrap::energy_points_;
    this->attack_damage_ = FragTrap::attack_damage_;
}

DiamondTrap::DiamondTrap(std::string name)
    : ClapTrap(name + "_clab_name"), ScavTrap(name), FragTrap(name) {
    std::cout << "DiamondTrap Name Constructor fused a ScavTrap and a FragTrap\n";
    this->name_ = name;
    this->ClapTrap::setName(name + "_clab_name");
    this->hit_points_ = FragTrap::hit_points_;
    this->energy_points_ = ScavTrap::energy_points_;
    this->attack_damage_ = FragTrap::attack_damage_;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) {
    std::cout << "A DiamondTrap was built by copy construction\n";
    *this = src;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "A DiamondTrap was dismantled by deconstructor\n";
}

DiamondTrap& DiamondTrap::operator = (const DiamondTrap &src) {
   if (this != &src) {
        std::cout << "DiamondTrap copy assignment operattor used" << std::endl;
        this->name_ = src.name_;
        this->hit_points_ = src.hit_points_;
        this->energy_points_ = src.energy_points_;
        this->attack_damage_ = src.attack_damage_;
    }
    return *this;
}

void DiamondTrap::whoAmI(void) {
    std::cout << "🤖 I'am " << this->name_ << " and also "
              << ClapTrap::name_ << std::endl;
}

std::string DiamondTrap::getName(void) { return this->name_; }

/* ************************************************************************** */
