/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 14:56:23 by pnolte            #+#    #+#             */
/*   Updated: 2023/07/31 15:54:45 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template <typename T>
void Printer(T var) {
    std::cout << var;
}

int main( void ) {
    int int_array[] = {1, 2, 3, 4, 5};
    size_t int_arr_len = sizeof(int_array) / sizeof(int_array[0]);
    
    std::cout << "Int Array Test" << std::endl;
    iter(int_array, int_arr_len, Printer);
    std::cout << std::endl;

    float float_array[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    size_t float_arr_len = sizeof(float_array) / sizeof(float_array[0]);
    
    std::cout << "Float Array Test" << std::endl;
    iter(float_array, float_arr_len, Printer);
    std::cout << std::endl;

    char char_array[] = {'T', 'E', 'E'};
    size_t char_arr_len = sizeof(char_array) / sizeof(char_array[0]);
    
    std::cout << "Char Array Test" << std::endl;
    iter(char_array, char_arr_len, Printer);
    std::cout << std::endl;
}
/* ************************************************************************** */
