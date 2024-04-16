/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:19:41 by pnolte            #+#    #+#             */
/*   Updated: 2023/07/06 13:23:51 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

#include <string>
#include <iostream>

PresidentailPardonForm::PresidentailPardonForm() 
 : AForm("Presidential Default" , 25, 5), _target("Default") {}

PresidentailPardonForm::PresidentailPardonForm(std::string target) 
 : AForm("PresidentialPardon", 25, 5), _target(target) {}

PresidentailPardonForm::PresidentailPardonForm(PresidentailPardonForm const &Src)
 : AForm(Src), _target(Src.getTarget()) { *this = Src; }

PresidentailPardonForm::~PresidentailPardonForm() {}
    
PresidentailPardonForm& PresidentailPardonForm::operator = (PresidentailPardonForm const &Src)
{
    if (this != &Src)
        *this = Src;
    return *this;
}

void PresidentailPardonForm::executeForm() const
{
    std::cout << "We are informing you, on the behold of the Allmighty Zaphod Beeblebrox, that " 
              << this->getTarget() << " has been pardoned by him.\n" << std::endl;
}

std::string PresidentailPardonForm::getTarget(void) const { return this->_target; }

/* ************************************************************************** */
