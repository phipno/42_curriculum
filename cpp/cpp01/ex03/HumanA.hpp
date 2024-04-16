/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:52:33 by pnolte            #+#    #+#             */
/*   Updated: 2023/04/20 14:41:42 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA_H__
#define __HUMANA_H__

#include <string>

#include "Weapon.hpp"

class HumanA {
   public:
    HumanA( std::string name, Weapon &type );
    ~HumanA( void );

    void attack( void );

   private:
    std::string name_;
    Weapon      &type_;
};

#endif // __HUMANA_H__

/* ************************************************************************** */
