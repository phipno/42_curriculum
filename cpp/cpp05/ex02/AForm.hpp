/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 16:32:42 by pnolte            #+#    #+#             */
/*   Updated: 2023/07/04 17:38:02 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AFORM_H__
#define __AFORM_H__

#include "Bureaucrat.hpp"

#include <string>
#include <iostream>

class AForm{
    public:
     AForm();
     AForm(std::string name, int grade_sign, int grade_exec);
     AForm(const AForm &Src);
     
     AForm& operator = (const AForm &Src);
    
     virtual ~AForm();
     
     std::string const  getName(void) const;
     bool               getSigned(void) const;
     int                getGradeSign(void) const;
     int                getGradeExec(void) const;

     void               beSigned(Bureaucrat &Bureaucrat);
     void               signForm(Bureaucrat &Bureaucrat);

     void               execute(Bureaucrat const &executor) const;
     virtual void       executeForm(void) const = 0;
     
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
     class FormNotSignedException : public std::exception {
        public:
         const char *exception() const throw()
         { return "The Form is not signed!"; }
     };
     
    private:
     std::string const  _name;
     bool               _signed;
     int const          _grade_sign;
     int const          _grade_exec;
};


std::ostream &operator << (std::ostream &os, const AForm &Src);

#endif // __AFORM_H__
/* ************************************************************************** */
