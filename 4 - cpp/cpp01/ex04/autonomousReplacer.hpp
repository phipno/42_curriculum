/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   autonomousReplacer.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 16:18:33 by pnolte            #+#    #+#             */
/*   Updated: 2023/04/26 14:36:23 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AUTONOMOUSREPLACER_H__
#define __AUTONOMOUSREPLACER_H__

#include <string>

class Foo {
   public:
    Foo( char *input[] );
    ~Foo( void );

    int         OpenCopy();
    void        TheStrChanger();
    int         TheFileCreater();
    std::string GetStr() const;

   private:
    std::string filename_;
    std::string s1_;
    std::string s2_;
    std::string str_;
};

int AutonomousReplacer( char *input[] );

#endif // __AUTONOMOUSREPLACER_H__

/* ************************************************************************** */
