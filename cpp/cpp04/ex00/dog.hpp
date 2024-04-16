/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 13:00:41 by pnolte            #+#    #+#             */
/*   Updated: 2023/05/06 15:05:43 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_H__
#define __DOG_H__

#include "animal.hpp"

class Dog : public Animal {
   public:
    Dog();
    Dog(const Dog &src);
    virtual ~Dog();

    Dog &operator = (const Dog &src);

    virtual void    makeSound() const;
};

#endif // __DOG_H__
/* ************************************************************************** */
