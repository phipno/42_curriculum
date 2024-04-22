/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 14:46:03 by pnolte            #+#    #+#             */
/*   Updated: 2023/08/01 15:59:50 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EASYFIND_H__
#define __EASYFIND_H__

#include <iostream>
#include <algorithm>
#include <stdexcept>

template <typename T>
void easyfind(T container, int nbr) {
    typename T::iterator iter;

    try {
        iter = std::find(container.begin(), container.end(), nbr);
        if (iter == container.end())
            throw std::runtime_error("Value not found in container");
        std::cout << "Element " << *iter << " found at " 
                  << std::distance(container.begin(), iter) << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Error: " << e.what() <<std::endl;
    }
}

#endif // __EASYFIND_H__
/* ************************************************************************** */
