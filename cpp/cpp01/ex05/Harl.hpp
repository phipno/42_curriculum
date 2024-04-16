/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 15:07:24 by pnolte            #+#    #+#             */
/*   Updated: 2023/04/26 16:58:27 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL_H__
#define __HARL_H__

#include <string>

class Harl {
   public:
    Harl();
    ~Harl();

    void    complain( std::string level );

   private:
    void    debug( void );
    void    info( void );
    void    warning( void );
    void    error( void );

    void    (Harl::*fa_[4])();

    std::string sa_[4];

};

#endif // __HARL_H__

/* ************************************************************************** */
