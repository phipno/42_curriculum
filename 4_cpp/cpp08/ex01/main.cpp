/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:01:08 by pnolte            #+#    #+#             */
/*   Updated: 2023/08/21 09:46:21 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

#include <iostream>

int main(void) {
  Span sp = Span(5);
  
  std::cout << std::endl << "S U B J E C T   T E S T I N G" << std::endl;
  sp.addNumber(6);
  sp.addNumber(3);
  sp.addNumber(17);
  sp.addNumber(9);
  sp.addNumber(11);
  std::cout << "Span is: ";
  sp.printer();
  std::cout << sp.shortestSpan() << std::endl;
  std::cout << sp.longestSpan() << std::endl;
  std::cout << std::endl;
  
  std::cout << "R A N D O M   T E S T I N G" << std::endl;
  Span Sp2(100000);
  Span Sp3(Sp2);
  Sp3.addRandomNumbers(25000, -10000000, 10000000);
  std::cout << Sp3.shortestSpan() << std::endl;
  std::cout << Sp3.longestSpan() << std::endl;
  std::cout << std::endl;
  
  std::cout << "F A I L   T E S T I N G" << std::endl;
  Span Sp4(0);
  Span Sp5(1);
  Span Sp6(2);
  Sp4.addNumber(1);
  Sp5.addNumber(1);
  Sp5.addNumber(1);
  Sp6.addRandomNumbers(100, -100, 100);
  std::cout << Sp4.shortestSpan() << std::endl;
  std::cout << Sp5.longestSpan() << std::endl;
  std::cout << Sp6.longestSpan() << std::endl;
  std::cout << std::endl << std::endl;
}

/* ************************************************************************** */
