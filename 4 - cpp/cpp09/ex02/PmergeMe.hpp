/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 15:00:15 by pnolte            #+#    #+#             */
/*   Updated: 2023/08/27 20:10:30 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PMERGEME_H__
#define __PMERGEME_H__

#include <deque>
#include <vector>

class Sort{
  public:
   Sort();
   Sort(char *argv[]);
   Sort(const Sort &Src);
   ~Sort();
   Sort &operator=(const Sort &Src);
  
   void fordJohnsosMergeInsertSort();
   void printTester();
   
  private:
   std::vector<int> _vecNbr;
   double           _vec_time_sort;
   std::deque<int>  _dequeNbr;
   double           _deque_time_sort; 
   int              _struggler;
   bool             _error;
   std::vector<int> _tester;
   int              _size;
};

#endif // __PMERGEME_H__
/* ************************************************************************** */
