/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 16:23:41 by pnolte            #+#    #+#             */
/*   Updated: 2023/08/23 14:21:19 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __RPN_H__
#define __RPN_H__

#include <stack>
#include <string>

class RPN {
  public:
   RPN();
   RPN(const RPN &src);
   ~RPN();
   RPN &operator=(const RPN &src);
   
   int calculatorRPN(const std::string &Input);
   
  private:
   std::stack<int> _operandStack;
};

#endif // __RPN_H__
/* ************************************************************************** */
