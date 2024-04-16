/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 19:02:24 by pnolte            #+#    #+#             */
/*   Updated: 2023/04/27 16:32:16 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Fixed.hpp"

//default constructor
Fixed::Fixed() : fp_(0) {
    std::cout << "Deafault constructor called" << std::endl;
}

//copy constructor
Fixed::Fixed(const Fixed &src) {
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

//destructor
Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

//copy assignment operator overload
Fixed& Fixed::operator = (const Fixed &src) {
    if (this != &src) {         //protection against self assignment
        std::cout << "Copy assignment operattor called" << std::endl;
        this->fp_ = src.getRawBits();
    }
    return *this;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->fp_;
}

void Fixed::setRawBits(int const raw) {
    std::cout <<  "setRawBits function was called" << std::endl;
    this->fp_ = raw;
}

/* ************************************************************************** */
