/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:19:42 by pnolte            #+#    #+#             */
/*   Updated: 2023/05/06 18:23:00 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP_H__
#define __SCAVTRAP_H__

#include <string>

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
   public:
    ScavTrap( void );
    ScavTrap( std::string name );
    ScavTrap( const ScavTrap &src );

    ~ScavTrap();

    ScavTrap&   operator = ( const ScavTrap &src );

    void        attack( const std::string& target );
    void        guardGate( void );
};

#endif // __SCAVTRAP_H__
/* ************************************************************************** */
