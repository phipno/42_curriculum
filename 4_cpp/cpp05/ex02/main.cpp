/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 10:18:58 by pnolte            #+#    #+#             */
/*   Updated: 2023/07/06 13:41:01 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#include <iostream>

int main() {
    Bureaucrat King(1, "King");
    Bureaucrat Me(150, "Philipp");
    PresidentailPardonForm Pardon("All Sinners");
    RobotomyRequestForm Robot("Bender");
    ShrubberyCreationForm Tree("Tree");

    PresidentailPardonForm NoPardon("All Sinners");
    RobotomyRequestForm NoRobot("Bender");
    ShrubberyCreationForm NoTree("Tree");
    
    std::cout << King << std::endl;
    std::cout << Me << std::endl;
    std::cout << Pardon << std::endl;
    std::cout << Robot << std::endl;
    std::cout << Tree << std::endl;

    Pardon.beSigned(King);
    Robot.beSigned(King);
    Tree.beSigned(King);

    Pardon.execute(King);
    Robot.execute(King);
    Tree.execute(King);
    
    King.executeForm(Pardon);
    King.executeForm(Robot);
    King.executeForm(Tree);

    NoPardon.beSigned(Me);
    NoRobot.beSigned(Me);
    NoTree.beSigned(Me);

    NoPardon.execute(Me);
    NoRobot.execute(Me);
    NoTree.execute(Me);
    
    Me.executeForm(NoPardon);
    Me.executeForm(NoRobot);
    Me.executeForm(NoTree);

    NoPardon.beSigned(King);
    NoRobot.beSigned(King);
    NoTree.beSigned(King);

    NoPardon.execute(Me);
    NoRobot.execute(Me);
    NoTree.execute(Me);

    Me.executeForm(NoPardon);
    Me.executeForm(NoRobot);
    Me.executeForm(NoTree);
}

/* ************************************************************************** */
