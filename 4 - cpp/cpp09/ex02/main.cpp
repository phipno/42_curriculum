/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 14:59:54 by pnolte            #+#    #+#             */
/*   Updated: 2023/08/27 14:31:55 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <list>
#include <iostream>
#include <stdexcept>

#include "PmergeMe.hpp"

int main(int argc, char *argv[]) {
  Sort Logo(argv);  
  
  std::cout << "Begin:  ";
  for (int i = 1; i < argc && argv[i] != NULL; i++)
    std::cout << argv[i] << " ";
  std::cout << std::endl;
  Logo.fordJohnsosMergeInsertSort();
}

/* ************************************************************************** */
