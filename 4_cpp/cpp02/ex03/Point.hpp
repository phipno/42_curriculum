/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 10:43:21 by pnolte            #+#    #+#             */
/*   Updated: 2023/05/02 14:11:03 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __POINT_H__
#define __POINT_H__

#include "Fixed.hpp"

class Point {
   public:
    Point();
    Point( float x, float y );
    Point( const Point &src );

    ~Point();

    Fixed GetX() const;
    Fixed GetY() const;

    Point& operator = (const Point &src);

   private:
    const Fixed x_;
    const Fixed y_;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif // __POINT_H__

/* ************************************************************************** */
