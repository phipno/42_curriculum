/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 15:37:45 by pnolte            #+#    #+#             */
/*   Updated: 2023/05/08 10:39:19 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_H__
#define __BRAIN_H__

#include <string>

class Brain {
   public:
    Brain();
    Brain(const Brain &src);
    virtual ~Brain();

    Brain &operator = (const Brain &src);

    void        setBrain(int i, std::string new_idea);
    std::string getIdea(int i);

    std::string ideas[100];
};

#endif // __BRAIN_H__
/* ************************************************************************** */
