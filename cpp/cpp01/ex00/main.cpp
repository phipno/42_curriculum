/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 21:23:36 by pnolte            #+#    #+#             */
/*   Updated: 2023/05/02 19:01:02 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void ){
    Zombie *rotten_heap = newZombie( "Creepy Heap" );

    randomChump( "Attacky Stack" );
    delete rotten_heap;
    system("leaks BraiiiiiiinnnzzzZ");
}

/* ************************************************************************** */
