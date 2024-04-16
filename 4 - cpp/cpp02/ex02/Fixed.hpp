/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 19:02:16 by pnolte            #+#    #+#             */
/*   Updated: 2023/04/28 19:09:57 by pnolte           ###   ########.fr       */
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

    bool operator > (const Fixed &src);
    bool operator < (const Fixed &src);
    bool operator >= (const Fixed &src);
    bool operator <= (const Fixed &src);
    bool operator == (const Fixed &src);
    bool operator != (const Fixed &src);

    Fixed operator + (const Fixed &src);
    Fixed operator - (const Fixed &src);
    Fixed operator * (const Fixed &src);
    Fixed operator / (const Fixed &src);

    Fixed& operator ++ ();
    Fixed operator ++ (int);
    Fixed& operator -- ();
    Fixed operator -- (int);

    float   toFloat( void ) const;
    int     toInt( void ) const;
    int     getRawBits( void ) const;
    void    setRawBits( int const raw );

    static Fixed& min(Fixed &src1, Fixed &src2);
    static Fixed& min(const Fixed &src1, const Fixed &src2);
    static Fixed& max(Fixed &src1, Fixed &src2);
    static Fixed& max(const Fixed &scr1, const Fixed &src2);

   private:
    int                 fp_;
    static const int    fractional_bits_ = 8;
};

std::ostream&   operator << (std::ostream &os, const Fixed &src);

#endif // __FIXED_H__

/* ************************************************************************** */
