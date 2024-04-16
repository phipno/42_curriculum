/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 10:43:16 by pnolte            #+#    #+#             */
/*   Updated: 2023/05/02 14:28:53 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x_(0), y_(0) { }

Point::Point(float x, float y) : x_(x), y_(y) { }

Point::Point(const Point &src) : x_(src.x_), y_(src.y_) { }

Point::~Point() { }

Fixed Point::GetX() const { return this->x_; }

Fixed Point::GetY() const { return this->y_; }

Point& Point::operator = (const Point &src) {
    (void)src;
    throw std::runtime_error("Cant reassign const values");
    return *this;
}

/* ************************************************************************** */
