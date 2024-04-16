/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 10:18:58 by pnolte            #+#    #+#             */
/*   Updated: 2023/07/03 14:44:08 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "Bureaucrat.hpp"

std::ostream &operator << (std::ostream &os, const Bureaucrat &src) {
      os << src.getName() << ", bureaucrat grade " << src.getGrade() << std::endl;
      return os;
}

Bureaucrat::Bureaucrat() : _name("Default"), _grade(0) {}

Bureaucrat::Bureaucrat(int grade, std::string name) : _name(name), _grade(grade) {
    try {    
        if (grade < 1)
            throw(GradeTooHighException());
        else if (grade > 150)
            throw(GradeTooLowException());
    }
    catch (GradeTooLowException &e) {
        std::cout << e.exception() << std::endl;
    }   
    catch (GradeTooHighException &e) {
        std::cout << e.exception() << std::endl;
    }
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) 
: _name(src.getName()), _grade(src.getGrade()) { *this = src; }

Bureaucrat::~Bureaucrat() {}

Bureaucrat& Bureaucrat::operator = (const Bureaucrat &src) {
    if (this != &src)
        this->_grade = src.getGrade();
    return *this;
}

void Bureaucrat::incrementGrade(void) { 
    try {
        if (this->_grade <= 1)
            throw(GradeTooHighException());
        else
            this->_grade--;
    }
    catch (GradeTooHighException &e) {
        std::cout << e.exception() << std::endl;
    }
}

void Bureaucrat::decrementGrade(void) { 
    try {
        if (this->_grade >= 150)
            throw(GradeTooLowException());
        else
            this->_grade++;
    }
    catch (GradeTooLowException &e) {
        std::cout << e.exception() << std::endl;
    }
}

std::string const Bureaucrat::getName(void) const { return _name; }

int Bureaucrat::getGrade(void) const { return _grade; }

/* ************************************************************************** */
