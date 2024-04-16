/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:18:46 by pnolte            #+#    #+#             */
/*   Updated: 2023/07/04 16:49:13 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ROBOTOMYREQUESTFORM_H__
#define __ROBOTOMYREQUESTFORM_H__

#include "AForm.hpp"

#include <string>

class RobotomyRequestForm : public AForm
{
    public:
     RobotomyRequestForm();
     RobotomyRequestForm(std::string target);
     RobotomyRequestForm(RobotomyRequestForm const &Src);
     ~RobotomyRequestForm();

    RobotomyRequestForm &operator = (RobotomyRequestForm const &Src);

     virtual void   executeForm() const;
     std::string    getTarget(void) const;
     
    private:
     std::string _target;
};

#endif // __ROBOTOMYREQUESTFORM_H__
/* ************************************************************************** */
