/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 15:12:26 by pnolte            #+#    #+#             */
/*   Updated: 2023/05/06 15:34:29 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGCAT_H__
#define __WRONGCAT_H__

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
   public:
    WrongCat();
    WrongCat(const WrongCat &src);
    virtual ~WrongCat();

    WrongCat &operator = (const WrongCat &src);

    void    makeSound() const ;
};

#endif // __WRONGCAT_H__
/* ************************************************************************** */
