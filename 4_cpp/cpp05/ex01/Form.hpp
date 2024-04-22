/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:32:42 by pnolte            #+#    #+#             */
/*   Updated: 2023/07/03 17:31:05 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM_H__
#define __FORM_H__

#include <string>
#include <iostream>

#include "Bureaucrat.hpp"

class Form{
    public:
     Form();
     Form(std::string name, int grade_sign, int grade_exec);
     Form(const Form &Src);
     
     Form& operator = (const Form &Src);
    
     ~Form();
     
     std::string const  getName(void) const;
     bool               getSigned(void) const;
     int                getGradeSign(void) const;
     int                getGradeExec(void) const;

     void               beSigned(Bureaucrat &Bureaucrat);
     void               signForm(Bureaucrat &Bureaucrat);
     
     class GradeTooHighException : public std::exception {
        public:
         const char *exception() const throw()
         { return "The Grade is too damn high!"; }
     };
     class GradeTooLowException : public std::exception {
        public:
         const char *exception() const throw()
         { return "The Grade is too damn low!"; }
     };
     
    private:
     std::string const  _name;
     bool               _signed;
     int const          _grade_sign;
     int const          _grade_exec;
};


std::ostream &operator << (std::ostream &os, const Form &Src);

#endif // __FORM_H__
/* ************************************************************************** */
