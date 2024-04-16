/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 19:50:31 by pnolte            #+#    #+#             */
/*   Updated: 2023/05/02 16:06:46 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Point.hpp"

void TestTriangles() {

    bool inside = bsp(Point(0.0f, 0.0f),
                      Point(0.0f, 4.0f),
                      Point(4.0f, 0.0f),
                      Point(1.5f, 1.5f));
    if (inside) {
        std::cout << "true\n";
    } else {
        std::cout << "false\n";
    }

    bool minus_outside = bsp(Point(-1.0f, 0.0f),
                             Point(0.0f, 4.0f),
                             Point(2.0f, 0.0f),
                             Point(1.0f, 3.0f));
    if (minus_outside) {
        std::cout << "true\n";
    } else {
        std::cout << "false\n";
    }

    bool float_outside = bsp(Point(0.0f, 0.0f),
                             Point(0.55555f, 0.0f),
                             Point(0.0f, 0.55555f),
                             Point(0.55555f, 0.55555f));
    if (float_outside) {
        std::cout << "true\n";
    } else {
        std::cout << "false\n";
    }

    bool on_point = bsp(Point(0.0f, 0.0f),
                        Point(4.0f, 0.0f),
                        Point(0.0f, 4.0f),
                        Point(4.0f, 0.0f));
    if (on_point) {
        std::cout << "true\n";
    } else {
        std::cout << "false\n";
    }

    bool on_line1 = bsp(Point(0.0f, 0.0f),
                        Point(4.0f, 0.0f),
                        Point(0.0f, 4.0f),
                        Point(2.0f, 0.0f));
    if (on_line1) {
        std::cout << "true\n";
    } else {
        std::cout << "false\n";
    }

    bool on_line2 = bsp(Point(0.0f, 0.0f),
                        Point(4.0f, 0.0f),
                        Point(0.0f, 4.0f),
                        Point(2.0f, 2.0f));
    if (on_line2) {
        std::cout << "true\n";
    } else {
        std::cout << "false\n";
    }

}

int     main( void ) {

    TestTriangles();
    return 0;
}

/* ************************************************************************** */
