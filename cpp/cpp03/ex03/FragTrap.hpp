/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 19:27:37 by pnolte            #+#    #+#             */
/*   Updated: 2023/05/06 18:23:07 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_H__
#define __FRAGTRAP_H__

#include <string>

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
   public:
    FragTrap( void );
    FragTrap( std::string name );
    FragTrap( const FragTrap &src );

    ~FragTrap();

    FragTrap&   operator = ( const FragTrap &src );

    void        highFivesGuys(void);
};

#endif // __FRAGTRAP_H__
/* ************************************************************************** */
