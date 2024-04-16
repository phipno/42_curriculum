/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 12:57:59 by pnolte            #+#    #+#             */
/*   Updated: 2023/07/12 13:14:13 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SERIALIZER_H__
#define __SERIALIZER_H__

#include <stdint.h>

#include "Data.hpp"

class Serializer {
    public:
     static uintptr_t serialize(Data* ptr);
     static Data* deserialize(uintptr_t raw);
    private:
     Serializer(void);
     Serializer(Serializer const &Src);
     ~Serializer(void);

     Serializer &operator=(Serializer const &Src);
};

#endif // __SERIALIZER_H__
/* ************************************************************************** */