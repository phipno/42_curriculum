/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phipno <phipno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:46:19 by pnolte            #+#    #+#             */
/*   Updated: 2023/08/17 10:46:54 by phipno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

#include <iostream>
#include <cstdlib>
#include <ctime>

Base::~Base() {}

Base* genrate(void) {
    int rand_num;
    Base *Prism;

    srand(time(NULL));
    rand_num = rand() % 3 + 1;
    switch (rand_num) {
        case 1:
            std::cout << "Albert has disguised himself\n";
            return Prism = new A;
        case 2:
            std::cout << "Berta has disguised himself\n";
            return Prism = new B;
        case 3:
            std::cout << "Charlie has disguised himself\n";
            return Prism = new C;
    }
    return NULL;
}

void identify(Base *p) {
    A *Albert = dynamic_cast<A*>(p);
    B *Berta = dynamic_cast<B*>(p);
    C *Charlie = dynamic_cast<C*>(p);
    
    if (Albert)
        std::cout << "Pointer is disguised as Albert\n";
    else if (Berta)
        std::cout << "Pointer is disguised as Berta\n";
    else if (Charlie)
        std::cout << "Pointer is disguised as Charlie\n";
    else
        std::cout << "Pointer is disguised as Error\n";
}

void identify(Base &p) {
    try {
        A Albert = dynamic_cast<A&>(p);
        std::cout << "Reference is disguised as Albert\n";
        return ;
    }
    catch (const std::exception& e) {}
    try {
        B Berta = dynamic_cast<B&>(p);
        std::cout << "Reference is disguised as Berta\n";
        return ;
    }
    catch (const std::exception& e) {}
        try {
        C Charlie = dynamic_cast<C&>(p);
        std::cout << "Reference is disguised as Charlie\n";
        return ;
    }
    catch (const std::exception& e) {}
}

/* ************************************************************************** */

