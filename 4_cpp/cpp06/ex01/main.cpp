/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phipno <phipno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 16:03:40 by pnolte            #+#    #+#             */
/*   Updated: 2023/08/17 10:26:54 by phipno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "Serializer.hpp"

#include <iostream>
#include <cstdlib>


int	main( void )
{
    Data    Prism(123);

    // serialize
    uintptr_t   test = Serializer::serialize(&Prism);

    // deserialize
    Data    *deserializedPrism = Serializer::deserialize(test);
    std::cout << std::endl << std::endl;

    // Result should be the same!
    // (Serialization/deserialization keep the same value inside data and same address)

    std::cout << "ADRESSES COMPARED:" << std::endl;
    std::cout << "----------------------------" << std::endl;
    std::cout << "Data1 address: "<< &Prism << std::endl;
    std::cout << "Data2 address: "<< deserializedPrism << std::endl;
    std::cout << std::endl << std::endl;

    std::cout << "VALUES INSIDE DATA COMPARED:" << std::endl;
    std::cout << "----------------------------" << std::endl;
    std::cout << "Data1 value: " << Prism.getData() << std::endl;
    std::cout << "Data2 value: " << (*deserializedPrism).getData() << std::endl;
    std::cout << std::endl << std::endl;

    return (0);
}

/* ************************************************************************** */
