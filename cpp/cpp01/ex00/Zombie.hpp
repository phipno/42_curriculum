/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 21:24:07 by pnolte            #+#    #+#             */
/*   Updated: 2023/04/19 13:32:26 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_H__
#define __ZOMBIE_H__

#include <string>

class Zombie {
   public:
    Zombie(std::string name);
    ~Zombie();

    void announce( void );

   private:
    std::string name_;
};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );

#endif // __ZOMBIE_H__

/* ************************************************************************** */
