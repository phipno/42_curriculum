/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 21:24:16 by pnolte            #+#    #+#             */
/*   Updated: 2023/04/19 13:57:14 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "Zombie.hpp"

Zombie::Zombie( std::string name ) : name_( name ) { }

Zombie::~Zombie() {
    std::cout << this->name_ << ": Just died because of a lack of brains :(" << std::endl;
}

void Zombie::announce( void ) {
    std::cout << name_ << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

/* ************************************************************************** */
