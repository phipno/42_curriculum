/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phipno <phipno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 14:58:21 by pnolte            #+#    #+#             */
/*   Updated: 2023/08/01 11:13:52 by phipno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY_H__
#define __ARRAY_H__

#include <iostream>
#include <stdexcept>

template <typename T>
class Array {
    public:
     Array<T>() : _a(), _size(0) {}
     Array<T>(unsigned int n) : _a(new T[n]()), _size(n) {}
     ~Array<T>() {
        if (this->_a)
            delete [] _a;
     }
    Array<T> (Array<T> const &src) : _a(new T[src._size]), _size(src._size) {
        for (size_t i = 0; i < _size; i++)
            _a[i] = src._a[i];
     }

     T &operator[](size_t i) const {
        if (i >= this->_size)
            throw std::out_of_range("Boy your Index be out of range");
        return this->_a[i];
     }
     
     Array<T> &operator=(Array<T> &src) {        
        if (this != &src) {
            this->_size = src._size;
            this->_a = new T[src._size];    
            for (size_t i = 0; i < src._size; i++)
                this->a[i] = src.a[i];
        }
        return *this;
     }
     
     size_t size() {
        return _size;
     }
     
    private:
     T *_a;
     size_t _size;
};

#endif // __ARRAY_H__
/* ************************************************************************** */
