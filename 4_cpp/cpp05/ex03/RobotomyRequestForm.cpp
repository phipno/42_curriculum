/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:19:51 by pnolte            #+#    #+#             */
/*   Updated: 2023/07/06 13:33:41 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"

#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm() 
 : AForm("Robot Default" , 72, 45), _target("Default") {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) 
 : AForm("RobotAutomation ", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &Src)
: AForm(Src), _target(Src.getTarget()) { *this = Src; }

RobotomyRequestForm::~RobotomyRequestForm() {}
    
RobotomyRequestForm& RobotomyRequestForm::operator = (RobotomyRequestForm const &Src)
{
    if (this != &Src)
        *this = Src;
    return *this;
}

void RobotomyRequestForm::executeForm() const
{   
    std::srand(std::time(NULL));
    std::cout << "rRrrRRrrrRRrRrAAAAAaaaAAAAaaaa\nbow bow bow" 
            << "........ seeesshhhhhh\nrararrarararararararar\n           TADA\n";
    if (std::rand() % 2 == 0)
        std::cout << this->_target << " has been robotomized successfully\n";
    else {
        std::cout << this->_target << " has been not robotomized failure\n"
                                   << "Self-Destruction activated" << std::endl;
        for (int i = 3; i >= 0; i--)
        {
            std::cout << i << std::endl;
        }
        std::cout << "Well" << std::endl;
    }
    std::cout << std::endl;
}

std::string RobotomyRequestForm::getTarget(void) const { return this->_target;}

/* ************************************************************************** */
