/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 19:45:55 by pnolte            #+#    #+#             */
/*   Updated: 2023/08/23 14:50:43 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

#include <iostream>

int main(int argc, char *argv[]) {
  RPN Calclass;
  
  if (argc != 2) {
    std::cout << "Usage: ./RPN [postfix_calculation]" << std::endl;
    return 1;
  }
  Calclass.calculatorRPN(argv[1]);
  return 0;
}

/* ************************************************************************** */
