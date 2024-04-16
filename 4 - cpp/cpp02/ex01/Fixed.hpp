/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 19:02:16 by pnolte            #+#    #+#             */
/*   Updated: 2023/04/27 20:06:21 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H__
#define __FIXED_H__

#include <iostream>

class Fixed {
   public:
    Fixed();
    Fixed( const Fixed &copy );
    Fixed( const int value );
    Fixed( const float value );

    ~Fixed();

    Fixed& operator = (const Fixed &src);

    float   toFloat( void ) const;
    int     toInt( void ) const;
    int     getRawBits( void ) const;
    void    setRawBits( int const raw );

   private:
    int                 fp_;
    static const int    fractional_bits_ = 8;
};

std::ostream& operator << (std::ostream &os, const Fixed &src);

#endif // __FIXED_H__

/* ************************************************************************** */
