/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:19:42 by pnolte            #+#    #+#             */
/*   Updated: 2023/05/03 16:18:53 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP_H__
#define __SCAVTRAP_H__

#include <string>

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
   public:
    ScavTrap( void );
    ScavTrap( std::string name );
    ScavTrap( const ScavTrap &src );

    ~ScavTrap();

    ScavTrap&   operator = ( const ScavTrap &src );

    void        attack( const std::string& target );
    void        guardGate( void );

   private:

};

#endif // __SCAVTRAP_H__
/* ************************************************************************** */
