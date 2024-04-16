/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:45:36 by pnolte            #+#    #+#             */
/*   Updated: 2023/04/19 15:17:13 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
    Zombie *zombieGang = new Zombie[N];

    for (int i = 0; i < N; i++) {
        zombieGang[i].SetName(name);
        std::cout << "Member " << i << " of ";
        zombieGang[i].announce();
    }
    return zombieGang;
}

/* ************************************************************************** */
