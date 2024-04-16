/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:43:01 by pnolte            #+#    #+#             */
/*   Updated: 2023/08/21 09:28:05 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <vector>
#include <list>
#include <set>

#include <iostream>

int main(void) {
    std::vector<int> Vec; //1, 2, 3, 4, 5
    for (int i = 1; i <= 5; ++i)
        Vec.push_back(i);
    std::cout << std::endl << "V E C T O R" << std::endl;
    easyfind(Vec, 3);
    easyfind(Vec, 6);
    easyfind(Vec, 0);
    easyfind(Vec, -1);
    
    
    std::list<int> List; //10, 20, 30, 40, 50
    for (int i = 1; i <= 5; ++i)
        List.push_back(i * 10);
    std::cout << std::endl <<  "L I S T" << std::endl;
    easyfind(List, 50);
    easyfind(List, 2923097);
    
    
    std::set<int> Set; //100, 200, 300, 400, 500
    for (int i = 1; i <= 5; ++i)
        Set.insert(i * 100);
    std::cout << std::endl << "S E T" << std::endl;
    easyfind(Set, 100);
    easyfind(Set, 400);
    std::cout << std::endl;
}

/* ************************************************************************** */
