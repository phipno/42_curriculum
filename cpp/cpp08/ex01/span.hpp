/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:01:39 by pnolte            #+#    #+#             */
/*   Updated: 2023/08/21 10:00:06 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SPAN_H__
#define __SPAN_H__

#include <vector>
#include <cstddef> // for size_t

class Span{
  public:
   Span();
   Span(unsigned int N);
   Span(Span const &src);
   ~Span();

   Span   &operator=(Span const &src);
   
   void   addNumber(int new_nbr);
   void   addRandomNumbers(size_t iterates, int range_min, int range_max);
   int    shortestSpan();
   int    longestSpan();

   void   printer();
	 
  private:
   unsigned int			max_size;
	 std::vector<int> nbr_vec;
};

#endif // __SPAN_H__
/* ************************************************************************** */
