/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 10:18:58 by pnolte            #+#    #+#             */
/*   Updated: 2023/07/04 17:38:15 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_H__
#define __BUREAUCRAT_H__

#include <string>
#include <iostream>

class AForm;

class Bureaucrat {
    public:
     Bureaucrat();
     Bureaucrat(int grade, std::string name);
     Bureaucrat(const Bureaucrat &src);
     ~Bureaucrat();
     
     Bureaucrat         &operator = (const Bureaucrat &src);
     
     std::string const  getName(void) const;
     int                getGrade(void) const;
     
     void               incrementGrade(void); 
     void               decrementGrade(void);  
     
     void               executeForm(AForm const &form);

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
     std::string const   _name;
     int                 _grade;
     
};

std::ostream       &operator << (std::ostream &os, const Bureaucrat &src);

#endif // __BUREAUCRAT_H__

/* ************************************************************************** */
