/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:19:20 by pnolte            #+#    #+#             */
/*   Updated: 2023/05/04 11:00:26 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


static void TestClapTrap( void ) {
    ClapTrap copy("clap");
    ClapTrap copy_assign("trap");
    ClapTrap def;
    ClapTrap clap(copy);
    ClapTrap trap = copy_assign;

    trap.attack("clap");
    clap.takeDamage(trap.getAttackDamage());
    for (int i = 0; i < 10; i++) {
        clap.attack("trap");
        trap.takeDamage(1);
    }
    trap.beRepaired(1);
    def.attack("crap");
    clap.takeDamage(9);
    clap.beRepaired(5);
    clap.attack("default");
    def.attack("clap");
    clap.takeDamage(9);
    def.attack("clap");
    clap.takeDamage(9);
    clap.beRepaired(1);
    clap.attack("default");
}

static void TestScavTrap( void ) {
    ScavTrap copy("clap");
    ScavTrap copy_assign("trap");
    ScavTrap def;
    ScavTrap clap(copy);
    ScavTrap trap = copy_assign;

    trap.attack("clap");
    clap.takeDamage(trap.getAttackDamage());
    clap.beRepaired(trap.getAttackDamage());
    for (int i = 0; i < 5; i++) {
        clap.attack("trap");
        trap.takeDamage(clap.getAttackDamage());
    }
    trap.beRepaired(1);
    def.guardGate();
}

static void TestFragTrap( void ) {
    FragTrap copy("clap");
    FragTrap copy_assign("trap");
    FragTrap def;
    FragTrap clap(copy);
    FragTrap trap = copy_assign;

    trap.attack("clap");
    clap.takeDamage(trap.getAttackDamage());
    clap.beRepaired(trap.getAttackDamage());
    for (int i = 0; i < 4; i++) {
        clap.attack("trap");
        trap.takeDamage(clap.getAttackDamage());
    }
    trap.beRepaired(1);
    def.highFivesGuys();
}

int main() {
    std::cout << "CLAP TRAP CLAP TRAP CLAP TRAP CLAP TRAP CLAP TRAP CLAP TRAP CLAP TRAP CLAP TRAP CLAP TRAP\n";
    TestClapTrap();
    std::cout << "CLAP TRAP CLAP TRAP CLAP TRAP CLAP TRAP CLAP TRAP CLAP TRAP CLAP TRAP CLAP TRAP CLAP TRAP\n\n";
    std::cout << "SCAV TRAP SCAV TRAP SCAV TRAP SCAV TRAP SCAV TRAP SCAV TRAP SCAV TRAP SCAV TRAP SCAV TRAP\n";
    TestScavTrap();
    std::cout << "SCAV TRAP SCAV TRAP SCAV TRAP SCAV TRAP SCAV TRAP SCAV TRAP SCAV TRAP SCAV TRAP SCAV TRAP\n\n";
    std::cout << "FRAG TRAP FRAG TRAP FRAG TRAP FRAG TRAP FRAG TRAP FRAG TRAP FRAG TRAP FRAG TRAP FRAG TRAP\n";
    TestFragTrap();
    std::cout << "FRAG TRAP FRAG TRAP FRAG TRAP FRAG TRAP FRAG TRAP FRAG TRAP FRAG TRAP FRAG TRAP FRAG TRAP\n\n";


}

/* ************************************************************************** */
