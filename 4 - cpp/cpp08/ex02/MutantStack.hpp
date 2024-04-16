/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 13:59:40 by pnolte            #+#    #+#             */
/*   Updated: 2023/08/21 10:03:57 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
  public:
   MutantStack() {};
   MutantStack(const MutantStack &src) : std::stack<T>(src) {};
   ~MutantStack() {};

   MutantStack &operator=(MutantStack const &src) {
    if (this != &src) 
      std::stack<T>::operator=(src); 
    return *this; 
   }
   
   typedef typename std::stack<T>::container_type::iterator iterator;
   typedef typename std::stack<T>::container_type::const_iterator const_iterator;
   
   iterator begin() { return std::stack<T>::c.begin(); };
   iterator end() { return std::stack<T>::c.end(); };
   const_iterator begin() const { return std::stack<T>::c.begin(); };
   const_iterator end() const { return std::stack<T>::c.end(); }; 
  
  private:
   
};

