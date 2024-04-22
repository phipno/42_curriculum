/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 19:02:24 by pnolte            #+#    #+#             */
/*   Updated: 2023/04/28 20:18:00 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

#include "Fixed.hpp"

Fixed::Fixed() : fp_(0) {
    // std::cout << "Deafault constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src) {
    // std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Fixed::Fixed(const int value) {
    // std::cout << "Int constructor called " << std::endl;
    this->fp_ = value << this->fractional_bits_;
}

Fixed::Fixed(const float value) {
    // std::cout << "Float constructor called" << std::endl;
    this->fp_ = (roundf(value * (1 << this->fractional_bits_)));
}

Fixed::~Fixed() {
    // std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator = (const Fixed &src) {
    if (this != &src) {
        // std::cout << "Copy assignment operattor called" << std::endl;
        this->fp_ = src.fp_;
    }
    return *this;
}

bool Fixed::operator > (const Fixed &src) {
    if (this->fp_ > src.fp_)
        return true;
    else
        return false;
}

bool Fixed::operator < (const Fixed &src) {
    if (this->fp_ < src.fp_)
        return true;
    else
        return false;
}

bool Fixed::operator >= (const Fixed &src) {
    if (this->fp_ >= src.fp_)
        return true;
    else
        return false;
}

bool Fixed::operator <= (const Fixed &src){
    if (this->fp_ <= src.fp_)
        return true;
    else
        return false;
}

bool Fixed::operator == (const Fixed &src){
    if (this->fp_ == src.fp_)
        return true;
    else
        return false;
}

bool Fixed::operator != (const Fixed &src) {
    if (this->fp_ != src.fp_)
        return true;
    else
        return false;

}

Fixed Fixed::operator + (const Fixed &src) {
    Fixed result;

    result.fp_ = this->fp_ + src.fp_;
    return result;
}

Fixed Fixed::operator - (const Fixed &src) {
    Fixed result;

    result.fp_ = this->fp_ - src.fp_;
    return result;
}

Fixed Fixed::operator * (const Fixed &src) {
    Fixed result;
    result = this->toFloat() * src.toFloat();

    return result;
}

Fixed Fixed::operator / (const Fixed &src) {
    Fixed result;
    result = this->toFloat() / src.toFloat();

    return result;
}

//prefix decrement
Fixed& Fixed::operator -- () {
    int n = this->fp_;

    n--;
    this->fp_ = n;
    return *this;
}

//postfix decrement
Fixed Fixed::operator -- (int) {
    Fixed tmp = *this;

    this->fp_--;
    return tmp;
}

//prefix increment
Fixed& Fixed::operator ++ () {
    this->fp_++;
    return *this;
}

//postfix increment
Fixed Fixed::operator ++ (int) {
    Fixed tmp = *this;

    this->fp_++;
    return tmp;
}


float Fixed::toFloat(void) const {
    return ((float)this->fp_ / (float)(1 << this->fractional_bits_));
}

int Fixed::toInt(void) const {
    return this->fp_ >> this->fractional_bits_;
}

int Fixed::getRawBits(void) const { return this->fp_; }

void Fixed::setRawBits(int const raw) {
    this->fp_ = raw;
}

Fixed& Fixed::min(Fixed &rfp1, Fixed &rfp2) {
    if (rfp1.fp_ < rfp2.fp_)
        return rfp1;
    else
        return rfp2;
}

Fixed& Fixed::min(const Fixed &rfp1, const Fixed &rfp2) {
    if (rfp1.fp_ < rfp2.fp_)
        return (Fixed&)rfp1;
    else
        return (Fixed&)rfp2;
}

Fixed& Fixed::max(Fixed &rfp1, Fixed &rfp2) {
    if (rfp1.fp_ > rfp2.fp_)
        return rfp1;
    else
        return rfp2;
}

Fixed& Fixed::max(const Fixed &rfp1, const Fixed &rfp2) {
    if (rfp1.fp_ > rfp2.fp_)
        return (Fixed&)rfp1;
    else
        return (Fixed&)rfp2;
}

std::ostream& operator << (std::ostream &os, const Fixed &src) {
    os << src.toFloat();
    return os;
}

/* ************************************************************************** */
