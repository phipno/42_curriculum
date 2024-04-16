/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:52:53 by pnolte            #+#    #+#             */
/*   Updated: 2023/07/06 14:20:12 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __INTERN_H__
#define __INTERN_H__

#include "AForm.hpp"

#include <string>

class Intern
{
    public:
     Intern();
     Intern(Intern const &Src);
     ~Intern();

    Intern &operator = (Intern const &Src);

    AForm *makeForm(std::string formName, std::string target);
    private:
};


#endif // __INTERN_H__
/* ************************************************************************** */
