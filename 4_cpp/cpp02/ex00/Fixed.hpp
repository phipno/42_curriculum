/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 19:02:16 by pnolte            #+#    #+#             */
/*   Updated: 2023/05/03 20:51:35 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H__
#define __FIXED_H__

class Fixed {
   public:
    Fixed();
    Fixed(const Fixed &copy);
    ~Fixed();

    Fixed& operator = (const Fixed &other);

    int     getRawBits( void ) const;
    void    setRawBits( int const raw );

   private:
    int                 fp_;
    static const int    fractional_bits = 8;
};

#endif // __FIXED_H__

/* ************************************************************************** */
