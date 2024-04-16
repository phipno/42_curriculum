/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 15:07:21 by pnolte            #+#    #+#             */
/*   Updated: 2023/04/26 18:59:09 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Harl.hpp"

int main(int argc, char *argv[]) {
    Harl Foo;

    if (argc < 2 || argc > 2) {
        std::cout << "Usage: ./harlFilter <input>" << std::endl;
        return EXIT_FAILURE;
    }
    Foo.complain(argv[1]);
    return EXIT_SUCCESS;
}

/* ************************************************************************** */
