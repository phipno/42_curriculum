/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 14:13:35 by pnolte            #+#    #+#             */
/*   Updated: 2023/05/06 15:29:58 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGANIMAL_H__
#define __WRONGANIMAL_H__

#include <string>

class WrongAnimal {
   public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal &src);
    virtual ~WrongAnimal();

    WrongAnimal &operator = (const WrongAnimal &src);

    std::string getType() const;
    void        makeSound() const;

   protected:
    std::string type;
};

#endif // __WRONGANIMAL_H__
/* ************************************************************************** */
