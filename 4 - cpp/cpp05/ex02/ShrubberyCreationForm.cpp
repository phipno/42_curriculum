/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:19:59 by pnolte            #+#    #+#             */
/*   Updated: 2023/07/06 13:23:38 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

#include <string>
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() 
 : AForm("Shrubbery Default" , 145, 137), _target("Default") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) 
 : AForm("ShrubberyForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &Src)
: AForm(Src), _target(Src.getTarget()) { *this = Src; }

ShrubberyCreationForm::~ShrubberyCreationForm() {}
    
ShrubberyCreationForm& ShrubberyCreationForm::operator = (ShrubberyCreationForm const &Src)
{
    if (this != &Src)
        *this = Src;
    return *this;
}

void ShrubberyCreationForm::executeForm() const
{
    std::cout << "Trees being planted\n";
    std::ofstream File((this->_target + "_shrubbery").c_str());
    File << "       oxoxoo    ooxoo\n"
         << "      ooxoxo oo  oxoxooo\n"
         << "     oooo xxoxoo ooo ooox\n"
         << "     oxo o oxoxo  xoxxoxo\n"
         << "      oxo xooxoooo o ooo\n"
         << "        ooo\\oo\\  /o/o\n"
         << "            \\  \\/ /\n"
         << "            |   /\n"
         << "            |  |\n"
         << "            | D|\n"
         << "            |  |\n"
         << "            |  |\n"
         << "     ______/____\\____\n"
         << "  Christopher S McDowell\n" << std::endl;
    File.close();
}

std::string ShrubberyCreationForm::getTarget(void) const { return this->_target; }

/* ************************************************************************** */
