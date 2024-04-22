/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 12:50:37 by pnolte            #+#    #+#             */
/*   Updated: 2023/08/21 10:01:05 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>
#include <iostream>
#include "MutantStack.hpp"

int main() {
  MutantStack<int> mstack;
  
  std::cout << std::endl << "S U B J E C T   T E S T I N G" << std::endl;
  mstack.push(5);
  mstack.push(17);
  std::cout << "Top element: " << mstack.top() << std::endl;
  mstack.pop();
  std::cout << "Size after pop: " << mstack.size() << std::endl;
  mstack.push(3);
  mstack.push(5);
  mstack.push(737);
  
  MutantStack<int>::iterator it = mstack.begin();
  MutantStack<int>::iterator ite = mstack.end();
  
  ++it;
  --it;
  std::cout << "Iterating through MutantStack:" << std::endl;
  while (it != ite)
  {
    std::cout << *it << std::endl;
    ++it;
  }
  
  // test stack implemantation 
  std::cout << std::endl << "S T A C K   T E S T I N G" << std::endl;
  std::stack<int> s(mstack);
  std::cout << "Stack top element and size: " << s.top() << " | " << s.size() << std::endl;
  
  //test copy constructor
  std::cout << std::endl << "C O P Y  T E S T I N G" << std::endl;
  MutantStack<int> mstackCopy(mstack);
  std::cout << "Copied stack contents:" << std::endl;
  for (MutantStack<int>::iterator cit = mstackCopy.begin(); cit != mstackCopy.end(); ++cit) {
    std::cout << *cit << std::endl;
  }
  
  //Test assignment operator
  std::cout << std::endl << "A S S I G N M E N T  T E S T I N G" << std::endl;
  MutantStack<int> mstackAssign;
  mstackAssign.push(99);
  mstackAssign.push(88);
  mstackAssign.push(77);
  mstackAssign = mstack;
  std::cout << "Assigned stack contents:" << std::endl;
  for (MutantStack<int>::iterator cit = mstackAssign.begin(); cit != mstackAssign.end(); ++cit) {
    std::cout << *cit << std::endl;
  }
    
  //test empty()
  std::cout << std::endl << "EMPTY/SWAP   T E S T I N G" << std::endl;
  MutantStack<int> empty;
  std::cout << "Is stack empty? " << (empty.empty() ? "yes" : "no") << std::endl;
  return 0;
}
/* ************************************************************************** */
