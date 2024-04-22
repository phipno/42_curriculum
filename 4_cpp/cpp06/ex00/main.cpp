/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 16:03:40 by pnolte            #+#    #+#             */
/*   Updated: 2023/07/12 12:31:26 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

#include <iostream>
#include <cstdlib> //for EXIT_FAILURE

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cout << "Usage: ./convert [input]" << std::endl;
        return EXIT_FAILURE;
    }
    return ScalarConverter::convert(argv[1]);
}

/* ************************************************************************** */
