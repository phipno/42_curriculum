/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 13:00:09 by pnolte            #+#    #+#             */
/*   Updated: 2023/05/06 15:05:38 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_H__
#define __CAT_H__

#include "animal.hpp"

class Cat : public Animal {
   public:
    Cat();
    Cat(const Cat &src);
    virtual ~Cat();

    Cat &operator = (const Cat &src);

    virtual void    makeSound() const ;
};

#endif // __CAT_H__
/* ************************************************************************** */
