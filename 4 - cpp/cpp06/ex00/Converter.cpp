/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phipno <phipno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:33:12 by pnolte            #+#    #+#             */
/*   Updated: 2023/08/17 10:53:01 by phipno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

#include <string>
#include <iostream>
#include <cstdlib>

#define T_Char 0
#define T_Int 1
#define T_Float 2
#define T_Double 3
#define FAIL 4

static int detectType(std::string const &input) {
    bool is_int = true;

    if (input.length() == 1 && input[0] >= 48 && input[0] <= 57)
        return T_Int;
    if (input.length() == 1 && input[0] >= 32 && input[0] <= 126)
        return T_Char;
    if (input == "-inff" || input == "+inff" || input == "nanf")
        return T_Float;
    if (input == "-inf" || input == "+inf" || input == "nan")
        return T_Double;
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == '.')
            is_int = false;
        if (std::string::npos != input.find_first_not_of("0123456789+-f.", 0))
            return FAIL;
    }
    if (is_int == false && input[input.length()] == 'f')
        return T_Float;
    else if (is_int == false)
        return T_Double;
    else if (is_int == true)
        return T_Int;
    else
        return FAIL;
}

static bool isInf(std::string const &input, int const type) {
    if ((type == T_Double || type == T_Float) 
        && (input == "-inff" || input == "+inff" || input == "nanf" 
        || input == "-inf" || input == "+inf" || input == "nan"))
        return true;
    return false;
}

static void printTheShit(std::string input, char const the_char, 
    long int const the_int, float const the_float, double const the_double, int const type) {
    if (the_char >= 32 && the_char <= 126 && the_int <= 126 && the_int >= 32)
        std::cout << "Char: " << the_char << std::endl;
    else if (isInf(input, type))
        std::cout << "Char: impossible" << std::endl;
    else
        std::cout << "Char: Non displayable" << std::endl; 
    if (isInf(input, type) && type == T_Double) {
        std::cout << "Int: impossible" << std::endl;
        std::cout << "Float: " << input << "f" << std::endl;        
        std::cout << "Double: " << input << std::endl;
    }
    else if (isInf(input, type) && type == T_Float) {
        std::cout << "Int: impossible" << std::endl;
        std::cout << "Float: " << input << std::endl;
        input.erase(input.length() - 1);
        std::cout << "Double: " << input << std::endl;
    }
    else {
        if (the_int <= 2147483647 && the_int >= -2147483648)
            std::cout << "Int: " << the_int << std::endl;
        else
            std::cout << "Int: Non displayable" << std::endl;
        std::cout << "Float: " << the_float << "f" << std::endl;        
        std::cout << "Double: " << the_double << std::endl;
    }
}

int ScalarConverter::convert(std::string const &input) {
    char        the_char;
    long int    the_int;
    float       the_float;
    double      the_double;
    int         type = detectType(input);

    if (type == FAIL) {
        std::cerr << "Error: Invalid value" << std::endl;
        return EXIT_FAILURE;
    }
    std::cout << "Type is " << type << std::endl;
    switch (type) {
        case T_Char:
            the_char = input[0];
            the_int = static_cast<long int>(the_char);
            the_float = static_cast<float>(the_char);
            the_double = static_cast<double>(the_char);
            break;
        case T_Int:
            the_int = std::atol(input.c_str());
            the_char = static_cast<char>(the_int);
            the_float = static_cast<float>(the_int);
            the_double = static_cast<double>(the_int);
            break;
        case T_Float:
            the_float = static_cast<float>(std::atof(input.c_str()));
            the_int = static_cast<long int>(the_float);
            the_char = static_cast<char>(the_float);
            the_double = static_cast<double>(the_float);
            break;
        case T_Double:
            the_double = std::atof(input.c_str());
            the_int = static_cast<long int>(the_double);
            the_float = static_cast<float>(the_double);
            the_char = static_cast<char>(the_double);
            break;
    }
    printTheShit(input, the_char, the_int, the_float, the_double, type);
    return EXIT_SUCCESS;
}

/* ************************************************************************** */
