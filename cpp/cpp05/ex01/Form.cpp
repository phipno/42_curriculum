/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:32:58 by pnolte            #+#    #+#             */
/*   Updated: 2023/07/04 14:00:43 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

#include <string>
#include <iostream>

Form::Form() 
: _name("Default"), _signed(false), _grade_sign(0), _grade_exec(0) {}

Form::Form(std::string name, int grade_sign, int grade_exec)
: _name(name), _signed(false), _grade_sign(grade_sign), _grade_exec(grade_exec) {
    try {
        if (grade_sign < 1 || grade_exec < 1)
            throw Form::GradeTooHighException();
        else if (grade_sign > 150 || grade_exec > 150)
            throw Form::GradeTooLowException();
    }
    catch (GradeTooHighException &e) {
        std::cout << e.exception() << std::endl;
    }
    catch (GradeTooLowException &e) {
        std::cout << e.exception() << std::endl;
    }
}

Form::Form(const Form &Src) 
: _name(Src._name), _signed(Src._signed), _grade_sign(Src._grade_sign), _grade_exec(Src._grade_exec) {
    *this = Src;
}

Form& Form::operator = (const Form &Src)
{
    if (this != &Src)
        this->_signed = Src._signed;
    return *this;
}

Form::~Form() {}

std::string const Form::getName(void) const { return _name; }

bool Form::getSigned(void) const { return _signed; }

int Form::getGradeSign(void) const { return _grade_sign; }

int Form::getGradeExec(void) const { return _grade_exec; }

void Form::beSigned(Bureaucrat &Bureaucrat)
{
    try {
        if (Bureaucrat.getGrade() >= this->_grade_sign)
            throw Form::GradeTooLowException();
        else
            this->_signed = true;
    }
    catch (Form::GradeTooLowException &e) {
        std::cout << e.exception() << std::endl;
    }
}

void Form::signForm(Bureaucrat &Bureaucrat)
{
    try {
        if (this->_signed == false)
            throw Form::GradeTooLowException();
        else
            std::cout << Bureaucrat.getName() << " signed " << this->_name << std::endl;
    }
    catch (Form::GradeTooLowException &e) {
    std::cout << Bureaucrat.getName() << " couldn't sign " << this->_name 
              << " because " << e.exception() << std::endl; 
    }    
}

std::ostream &operator << (std::ostream &os, const Form &Src) {
    os << Src.getName() << " is " << (Src.getSigned() ? "signed\n" : "not signed\n") 
       << "Required grade to sign: " << Src.getGradeSign() << "\n"
       << "Required grade to Execute: " << Src.getGradeExec() << std::endl;
    return os;
}

/* ************************************************************************** */
