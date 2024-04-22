/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 10:43:01 by pnolte            #+#    #+#             */
/*   Updated: 2023/05/02 16:07:47 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include "Fixed.hpp"

static bool IsOnLine( Point const a, Point const b, Point const c, Point const point ) {
    if (((point.GetY() - a.GetY()) * (b.GetX() - a.GetX()) == ((b.GetY() - a.GetY()) * (point.GetX() - a.GetX())))
      || ((point.GetY() - a.GetY()) * (c.GetX() - a.GetX()) == ((c.GetY() - a.GetY()) * (point.GetX() - a.GetX())))
      || ((point.GetY() - b.GetY()) * (c.GetX() - b.GetX()) == ((c.GetY() - b.GetY()) * (point.GetX() - b.GetX()))))
        return true;
    return false;
}

static Fixed Area(Point one, Point two, Point three) {
    Fixed sum((one.GetX() * (two.GetY() - three.GetY())
                + two.GetX() * (three.GetY() - one.GetY())
                + three.GetX() * (one.GetY() - two.GetY())) / 2);
    if (sum < 0)
        return sum * -1;
   return sum;
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
    Fixed point_area[3];
    Fixed total_abc_area(Area(a, b, c));
    Fixed total_point_area;

    if (IsOnLine(a, b, c, point) == true)
        return false;
    point_area[0] = Area(point, a, b);
    point_area[1] = Area(point, c, b);
    point_area[2] = Area(point, a, c);
    total_point_area = point_area[0] + point_area[1] + point_area[2];

    if (total_point_area == total_abc_area)
        return true;
    else
        return false;
}

/* ************************************************************************** */
