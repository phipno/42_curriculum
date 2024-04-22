/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 12:59:30 by pnolte            #+#    #+#             */
/*   Updated: 2023/05/06 15:05:32 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include <string>

class Animal {
   public:
    Animal();
    Animal(const Animal &src);
    virtual ~Animal();

    Animal &operator = (const Animal &src);

    std::string     getType() const;
    virtual void    makeSound() const;

   protected:
    std::string type;
};

#endif // __ANIMAL_H__
/* ************************************************************************** */
