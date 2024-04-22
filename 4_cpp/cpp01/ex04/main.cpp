/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:58:48 by pnolte            #+#    #+#             */
/*   Updated: 2023/04/26 14:49:17 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "autonomousReplacer.hpp"

int main( int argc, char *argv[] ) {

    if (argc > 4 || argc < 4) {
        std::cerr << "Usage: \"./Sed_is_for_losers <Filename> <str1> <str2>" << std::endl;
        return EXIT_FAILURE;
    }
    if (AutonomousReplacer(argv))
        return EXIT_FAILURE;
    return EXIT_FAILURE;
}

/* ************************************************************************** */
