/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 14:58:21 by pnolte            #+#    #+#             */
/*   Updated: 2023/07/31 16:04:42 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ITER_H__
#define __ITER_H__

#include <iostream>

template <typename T>
void iter(T *array, size_t arr_len, void (*func)(T const &array)) {
    for (size_t i = 0; i < arr_len; i++) {
        func(array[i]);
    }
}

#endif // __ITER_H__
/* ************************************************************************** */
