/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneybook.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 17:08:35 by pnolte            #+#    #+#             */
/*   Updated: 2023/04/14 19:10:31 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEYBOOK_HPP
#define PHONEYBOOK_HPP

#include "contact.hpp"

class PhoneBook {
   public:
    PhoneBook(void);
    ~PhoneBook(void);

    void    Add(PhoneBook *book);
    void    Search(PhoneBook book);
    void    DisplayDis(PhoneBook book);

   private:
    Contact contacts_[8];
    int     index_;
    bool    full_;
};

#endif

/* ************************************************************************** */
