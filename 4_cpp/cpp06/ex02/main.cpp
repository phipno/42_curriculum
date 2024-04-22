/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phipno <phipno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 18:05:22 by pnolte            #+#    #+#             */
/*   Updated: 2023/08/17 10:45:49 by phipno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

#include <cstdlib>

int main() {
    Base *Prism;

    Prism = genrate();
    identify(Prism);
    identify(*Prism);
    identify(NULL);
    delete Prism;
    return EXIT_SUCCESS;
}

/* ************************************************************************** */
