/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:23:23 by pnolte            #+#    #+#             */
/*   Updated: 2023/08/26 14:01:31 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

#include <stack>
#include <string>
#include <exception>
#include <iostream>

RPN::RPN() {}

RPN::RPN(const RPN &src) {
  *this = src;  
}

RPN::~RPN() {}

RPN& RPN::operator=(const RPN &src) {
  if (this != &src)
    this->_operandStack = src._operandStack;
  return *this;
}

bool isOperator(char c) {
  return c == '+' || c == '-' || c == '*' || c == '/';
}

int operationPerPerPerfomer(char operatorr, int operand1, int operand2) {
  switch(operatorr) {
    case ('+'):
      return operand1 + operand2;
    case ('-'):
      return operand1 - operand2;
    case ('*'):
      return operand1 * operand2;
    case ('/'):
      return operand1 / operand2;
    default:
      throw(std::runtime_error("Error"));
  }
}

int RPN::calculatorRPN(const std::string &Input) {
  int operand1;
  int operand2;

  for (std::string::const_iterator It = Input.begin(); It != Input.end(); ++It) {
    try {
      if (std::isdigit(*It))
        this->_operandStack.push(*It - '0');
      else if (isOperator(*It) && this->_operandStack.size() > 1) {
        operand2 = this->_operandStack.top();
        this->_operandStack.pop();
        operand1 = this->_operandStack.top();
        this->_operandStack.pop();
        this->_operandStack.push(operationPerPerPerfomer(*It, operand1, operand2));
      }
      else if (*It != ' ') 
        throw(std::invalid_argument("Error"));  
    }
    catch (std::exception const &e) {
      std::cout << e.what() << std::endl;
      return 1;
    }
  }
  std::cout << this->_operandStack.top() << std::endl;
  return this->_operandStack.top();
}

/* ************************************************************************** */
