/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 11:06:58 by pnolte            #+#    #+#             */
/*   Updated: 2023/05/06 18:05:24 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMONDTRAP_H__
#define __DIAMONDTRAP_H__

#include <string>

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
   public:
    DiamondTrap( void );
    DiamondTrap( std::string name );
    DiamondTrap( const DiamondTrap &src );

    ~DiamondTrap();

    DiamondTrap&    operator = ( const DiamondTrap &src );

    void        whoAmI( void );
    std::string getName( void );

   private:
    std::string     name_;
};

#endif // __DIAMONDTRAP_H__
/* ************************************************************************** */
