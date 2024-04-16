/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:52:23 by pnolte            #+#    #+#             */
/*   Updated: 2023/04/20 14:44:45 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB_H__
#define __HUMANB_H__

#include <string>

#include "Weapon.hpp"

class HumanB {
   public:
    HumanB( std::string name );
    ~HumanB( void );

    void    setWeapon( Weapon &type );
    void    attack( void );

   private:
    std::string name_;
    Weapon      *type_;
};


#endif // __HUMANB_H__

/* ************************************************************************** */
