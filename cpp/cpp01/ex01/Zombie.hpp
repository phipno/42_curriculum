/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 21:24:07 by pnolte            #+#    #+#             */
/*   Updated: 2023/04/19 15:15:04 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <string>

class Zombie {
   public:
    Zombie( void );
    ~Zombie( void );

    void announce( void );
    void SetName( std::string name );

   private:
    std::string name_;
};

Zombie* zombieHorde( int N, std::string name );

#endif // __ZOMBIE_H__

/* ************************************************************************** */
