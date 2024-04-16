/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 21:38:50 by pnolte            #+#    #+#             */
/*   Updated: 2023/04/19 13:59:22 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#include "Zombie.hpp"


Zombie* newZombie( std::string name ) {
    Zombie *rotten_heap = new Zombie(name);

    rotten_heap->announce();
    return rotten_heap;
}

/* ************************************************************************** */
