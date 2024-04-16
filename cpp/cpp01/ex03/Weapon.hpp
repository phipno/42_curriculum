/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 17:53:01 by pnolte            #+#    #+#             */
/*   Updated: 2023/04/20 14:31:54 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_H__
#define __WEAPON_H__

#include <string>

class Weapon {
   public:
    Weapon( std::string type );
    ~Weapon( void );

    const std::string   &getType( void );
    void                setType(const std::string &type );

   private:
    std::string type_;
};

#endif // __WEAPON_H__

/* ************************************************************************** */
