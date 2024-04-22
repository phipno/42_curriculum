/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phipno <phipno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 14:56:23 by pnolte            #+#    #+#             */
/*   Updated: 2023/08/03 10:39:16 by phipno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#include <iostream>
#include <string>

int main(void) {
    
    std::cout << "INT_ARRAY" << std::endl;
    std::cout << "=--=--=--=--=--==--=--=--=--=--=\n";
    Array<int> int_array = Array<int>(3);
    for (size_t i = 0; i < int_array.size(); i++)
        std::cout << int_array[i] << std::endl;
        
    std::cout << "=--=--=--=--=--==--=--=--=--=--=\n" << std::endl << std::endl << std::endl;
    
    std::cout << "CHAR_ARRAY" << std::endl;
    std::cout << "=--=--=--=--=--==--=--=--=--=--=\n";
    Array<char> char_array = Array<char>(3);
    for (size_t i = 0; i < char_array.size(); i++) 
        char_array[i] = 'D';
    for (size_t i = 0; i < char_array.size(); i++) 
        std::cout << char_array[i] << std::endl;
    std::cout << "COPY ASSIGNMENT" << std::endl;
    Array<char> copy_a = Array<char>(char_array);
    for (size_t i = 0; i < copy_a.size(); i++) 
        std::cout << copy_a[i] << std::endl;

    std::cout << "=--=--=--=--=--==--=--=--=--=--=\n" << std::endl << std::endl << std::endl;
    
    std::cout << "STR_ARRAY" << std::endl;
    std::cout << "=--=--=--=--=--==--=--=--=--=--=\n";
    Array<std::string> str_array = Array<std::string>(3);
    for (size_t i = 0; i < str_array.size(); i++) 
        str_array[i] = "ollo";
    for (size_t i = 0; i < str_array.size(); i++) 
        std::cout << str_array[i] << std::endl;
    std::cout << "COPY CONSTRUCTOR" << std::endl;
    Array<std::string> copy_array(str_array);
    for (size_t i = 0; i < str_array.size(); i++) 
        std::cout << str_array[i] << std::endl;
    std::cout << "=--=--=--=--=--==--=--=--=--=--=\n" << std::endl << std::endl << std::endl;

    // system("leaks Array");
}