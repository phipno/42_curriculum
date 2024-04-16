/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:19:20 by pnolte            #+#    #+#             */
/*   Updated: 2023/05/06 18:28:43 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

static void TestDiamondTrap( void ) {
    DiamondTrap clap("clap");
    DiamondTrap trap("trap");
    ScavTrap    scav("scav");
    FragTrap    frag("frag");

    trap.attack("clap");
    clap.takeDamage(trap.getAttackDamage());
    clap.beRepaired(trap.getAttackDamage());
    for (int i = 0; i < 5; i++) {
        clap.attack("trap");
        trap.takeDamage(clap.getAttackDamage());
    }
    trap.beRepaired(1);
    clap.whoAmI();
    scav.guardGate();
    frag.highFivesGuys();
    scav.attack("frag");
    frag.takeDamage(scav.getAttackDamage());
}

int main() {
    std::cout << "DIAMOND TRAP DIAMOND TRAP DIAMOND TRAP DIAMOND TRAP DIAMOND TRAP DIAMOND TRAP DIAMOND TRAP\n";
    TestDiamondTrap();
    std::cout << "DIAMOND TRAP DIAMOND TRAP DIAMOND TRAP DIAMOND TRAP DIAMOND TRAP DIAMOND TRAP DIAMOND TRAP\n";
}

/* ************************************************************************** */
