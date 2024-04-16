/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 14:18:59 by pnolte            #+#    #+#             */
/*   Updated: 2023/07/04 17:21:16 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SHRUBBERYCREATIONFORM_H__
#define __SHRUBBERYCREATIONFORM_H__

#include "AForm.hpp"

#include <string>

class ShrubberyCreationForm : public AForm
{
    public:
     ShrubberyCreationForm();
     ShrubberyCreationForm(std::string target);
     ShrubberyCreationForm(ShrubberyCreationForm const &Src);
     ~ShrubberyCreationForm();

    ShrubberyCreationForm &operator = (ShrubberyCreationForm const &Src);

     virtual void   executeForm() const;
     std::string    getTarget(void) const;
     
    private:
     std::string _target;
};

#endif // __SHRUBBERYCREATIONFORM_H__
/* ************************************************************************** */
