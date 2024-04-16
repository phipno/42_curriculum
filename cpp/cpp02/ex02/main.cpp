/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 19:50:31 by pnolte            #+#    #+#             */
/*   Updated: 2023/04/28 20:34:51 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Fixed.hpp"

static void PrintResultA(Fixed result, Fixed right) {
    std::cout << "   " << result;
    std::cout << " should be " << right << "\n";
}

static void PrintResult(int result, int right) {
    std::cout << "       " << result;
    std::cout << " should be " << right << "\n";
}

static void PrintResultM(Fixed result, Fixed right) {
    std::cout << "   " << result;
    std::cout << " should be " << right << "\n";
}

static void ComparisonTests( void ) {
    Fixed   zero;
    Fixed   small(1.231334f);
    Fixed   big(1234);

    std::cout << "\nZERO ZERO ZERO ZERO ZERO ZERO\n";
    PrintResult(zero > zero, false);
    PrintResult(zero < zero, false);
    PrintResult(zero == zero, true);
    PrintResult(zero >= zero, true);
    PrintResult(zero <= zero, true);
    PrintResult(zero != zero, false);

    std::cout << "\nA B A B A B A B A B A B A B A \n";
    PrintResult(big > small, true);
    PrintResult(big < small, false);
    PrintResult(big >= small, true);
    PrintResult(big <= small, false);
    PrintResult(big == small, false);
    PrintResult(big != small, true);
}

static void ArithmeticTests( void ) {
    Fixed   a(16.5f);
    Fixed   b(8);
    Fixed   zero;

    std::cout << "\nARITHMETIC ARITHMETIC ARITHMETIC\n";
    PrintResultA(a + b, 24.5f);
    PrintResultA(a - b, 8.5f);
    PrintResultA(b - a, -8.5f);
    PrintResultA(a * b, 132);
    PrintResultA(a / b, 2.0625f);
    PrintResultA(zero * zero, 0);
    PrintResultA(zero / zero, 404);
}

static void MinMaxTests( void ) {
    Fixed       zero;
    Fixed       small(1.1f);
    Fixed       big(12);
    const Fixed c_small(1.1f);
    const Fixed c_big(12);

    std::cout << "\nMIN MAX MIN MAX MIN MAX MIN MAX\n";
    PrintResultM(Fixed::max(small, big), 12);
    PrintResultM(Fixed::max(c_small, c_big), 12);
    PrintResultM(Fixed::min(small, big), 1.1f);
    PrintResultM(Fixed::min(c_small, c_big), 1.1f);
    PrintResultM(Fixed::max(zero, zero), 0);
    PrintResultM(Fixed::min(zero, zero), 0);
}

static void DecrementTests( void ) {
    Fixed a(1);

    std::cout << "\nDECREMENT DECREMENT DECREMENT\n";
    std::cout << a << std::endl;
    std::cout << --a << std::endl;
    std::cout << a << std::endl;
    std::cout << a-- << std::endl;
    std::cout << a << std::endl;
}

int     main( void ) {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;

    std::cout << Fixed::max( a, b ) << std::endl;
    DecrementTests();
    ComparisonTests();
    ArithmeticTests();
    MinMaxTests();
    return 0;
}

/* ************************************************************************** */
