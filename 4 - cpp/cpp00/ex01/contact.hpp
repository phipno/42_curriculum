/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 12:32:05 by pnolte            #+#    #+#             */
/*   Updated: 2023/04/14 16:52:39 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONTACT_H__
#define __CONTACT_H__

#include <string>

class Contact {
   public:
    Contact(void);
    ~Contact(void);

    void        AssignStr(void);
    std::string GetStrFN(void);
    std::string GetStrLN(void);
    std::string GetStrNN(void);
    std::string GetStrPN(void);
    std::string GetStrDS(void);

   private:
    std::string first_name_;
    std::string last_name_;
    std::string nick_name_;
    std::string phone_number_;
    std::string darkest_secret_;
};

#endif

/* ************************************************************************** */
