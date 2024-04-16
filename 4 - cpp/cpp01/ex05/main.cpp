/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 15:07:21 by pnolte            #+#    #+#             */
/*   Updated: 2023/05/02 19:31:43 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( void ) {
    Harl Foo;

    Foo.complain("DEBUG");
    Foo.complain("INFO");
    Foo.complain("WARNING");
    Foo.complain("ERROR");
    return EXIT_SUCCESS;
}

/* ************************************************************************** */
