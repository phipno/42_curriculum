/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:32:58 by pnolte            #+#    #+#             */
/*   Updated: 2023/07/06 14:44:30 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

#include <string>
#include <iostream>

AForm::AForm() 
: _name("Default"), _signed(false), _grade_sign(0), _grade_exec(0) {}

AForm::AForm(std::string name, int grade_sign, int grade_exec)
: _name(name), _signed(false), _grade_sign(grade_sign), _grade_exec(grade_exec) {
    try {
        if (grade_sign < 1 || grade_exec < 1)
            throw AForm::GradeTooHighException();
        else if (grade_sign > 150 || grade_exec > 150)
            throw AForm::GradeTooLowException();
    }
    catch (GradeTooHighException &e) {
        std::cout << e.exception() << std::endl;
    }
    catch (GradeTooLowException &e) {
        std::cout << e.exception() << std::endl;
    }
}

AForm::AForm(const AForm &Src) 
: _name(Src._name), _signed(Src._signed), _grade_sign(Src._grade_sign), _grade_exec(Src._grade_exec) {
    *this = Src;
}

AForm& AForm::operator = (const AForm &Src)
{
    if (this != &Src)
        this->_signed = Src._signed;
    return *this;
}

AForm::~AForm() {}

std::string const AForm::getName(void) const { return _name; }

bool AForm::getSigned(void) const { return _signed; }

int AForm::getGradeSign(void) const { return _grade_sign; }

int AForm::getGradeExec(void) const { return _grade_exec; }

void AForm::beSigned(Bureaucrat &Bureaucrat)
{
    try {
        if (Bureaucrat.getGrade() >= this->_grade_sign)
            throw AForm::GradeTooLowException();
        else
            this->_signed = true;
    }
    catch (AForm::GradeTooLowException &e) {
        std::cout << e.exception() << std::endl;
    }
}

void AForm::signForm(Bureaucrat &Bureaucrat)
{
    try {
        if (this->_signed == false)
            throw AForm::GradeTooLowException();
        else
            std::cout << Bureaucrat.getName() << " signed " << this->_name << std::endl;
    }
    catch (AForm::GradeTooLowException &e) {
        std::cout << Bureaucrat.getName() << " couldn't sign " << this->_name 
              << " because " << e.exception() << std::endl; 
    }    
}

void AForm::execute(Bureaucrat const &executor) const
{
    try {
        if (this->_signed == true && executor.getGrade() <= this->_grade_exec)
            this->executeForm();
        else
            throw AForm::GradeTooLowException();
    }
    catch (AForm::GradeTooLowException &e) {
        std::cout << e.exception() << std::endl;
    }
}

std::ostream &operator << (std::ostream &os, const AForm &Src) {
    os << Src.getName() << " is " << (Src.getSigned() ? "signed\n" : "not signed\n") 
       << "Required grade to sign: " << Src.getGradeSign() << "\n"
       << "Required grade to Execute: " << Src.getGradeExec() << std::endl;
    return os;
}

/* ************************************************************************** */
