/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:18:33 by pnolte            #+#    #+#             */
/*   Updated: 2023/07/04 16:49:31 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PRESIDENTIALPARDONFORM_H__
#define __PRESIDENTIALPARDONFORM_H__

#include "AForm.hpp"

#include <string>

class PresidentailPardonForm : public AForm
{
    public:
     PresidentailPardonForm();
     PresidentailPardonForm(std::string target);
     PresidentailPardonForm(PresidentailPardonForm const &Src);
     ~PresidentailPardonForm();

     PresidentailPardonForm &operator = (PresidentailPardonForm const &Src);

     virtual void   executeForm() const;
     std::string    getTarget(void) const;
     
    private:
     std::string _target;
};

#endif // __PRESIDENTIALPARDONFORM_H__
/* ************************************************************************** */
