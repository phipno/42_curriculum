/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 10:18:58 by pnolte            #+#    #+#             */
/*   Updated: 2023/07/06 14:52:12 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"

#include <iostream>

int main() {
    Intern randomHardWorkingIntern;
    AForm *Pardon = randomHardWorkingIntern.makeForm("presidential pardon", "All Sinners");
    AForm *Robot = randomHardWorkingIntern.makeForm("robotomy request", "Bender");
    AForm *Tree = randomHardWorkingIntern.makeForm("shrubbery creation", "Tree");
    AForm *fail = randomHardWorkingIntern.makeForm("fail", "fail");
    
    std::cout << *Pardon << std::endl;
    std::cout << *Robot << std::endl;
    std::cout << *Tree << std::endl;

    delete Pardon;
    delete Robot;
    delete Tree;
    delete fail;
}

/* ************************************************************************** */
