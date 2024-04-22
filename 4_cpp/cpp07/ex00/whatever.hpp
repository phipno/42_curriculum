/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 14:58:21 by pnolte            #+#    #+#             */
/*   Updated: 2023/07/31 15:21:53 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WHATEVER_H__
#define __WHATEVER_H__

template <typename T>
void swap(T &a, T &b) {
    T temp;

    temp = a;
    a = b;
    b = temp;
}

template <typename T>
T min(T const &a, T const &b) {
    return ((a < b) ? a : b);
}

template <typename T>
T max(T const &a, T const &b) {
    return ((a > b) ? a : b);
}

#endif // __WHATEVER_H__
/* ************************************************************************** */
