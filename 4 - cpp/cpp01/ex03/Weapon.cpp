/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:52:55 by pnolte            #+#    #+#             */
/*   Updated: 2023/04/20 14:34:21 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#include "Weapon.hpp"

Weapon::Weapon( std::string type ) {
    this->type_ = type;
}

Weapon::~Weapon() {}

const std::string   &Weapon::getType() { return this->type_; }

void                Weapon::setType( const std::string &type ) {
    this->type_ = type;
}

/* ************************************************************************** */
