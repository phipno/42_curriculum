/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:51:13 by pnolte            #+#    #+#             */
/*   Updated: 2023/04/19 16:23:19 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main ( void ) {
    std::string STR  = "HI THIS IS BRIAN";
    std::string *stringPTR = &STR;
    std::string &stringREF = STR;

    std::cout << "MemAdd of STR: " << &STR << std::endl;
    std::cout << "MemAdd of PTR: " << stringPTR << std::endl;
    std::cout << "MemAdd of REF: " << &stringREF << std::endl;

    std::cout << "Value of  REF: " << STR << std::endl;
    std::cout << "Value of  REF: " << *stringPTR << std::endl;
    std::cout << "Value of  REF: " << stringREF << std::endl;

    return EXIT_SUCCESS;
}

/* ************************************************************************** */
