/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:52:42 by pnolte            #+#    #+#             */
/*   Updated: 2023/07/06 14:37:57 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

#include <iostream>
#include <string>

Intern::Intern() {}

Intern::Intern(Intern const &Src) {
    *this = Src;
}

Intern::~Intern() {}

Intern& Intern::operator = (Intern const &Src) {
    if (this != &Src)
        return *this;
    return *this;
}

static AForm *newShrubbery(std::string target) {
    return new ShrubberyCreationForm(target);
}

static AForm *newRobotomy(std::string target) {
    return new RobotomyRequestForm(target);
}

static AForm *newPresidential(std::string target) {
    return new PresidentailPardonForm(target);
}

AForm *Intern::makeForm(std::string formName, std::string target)
{
    AForm *(*List[])(const std::string target) = {newShrubbery, newRobotomy, newPresidential};
    std::string formNames[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    for (int i = 0; i < 3; i++)
    {
        if (formName == formNames[i])
        {
            std::cout << "Intern creates " << formName << std::endl;
            return (List[i])(target);
        }
    }
    std::cout << "Intern could not create " << formName << std::endl;
    return NULL;
}

/* ************************************************************************** */
