/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phipno <phipno@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 15:48:58 by pnolte            #+#    #+#             */
/*   Updated: 2023/08/17 10:44:40 by phipno           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BASE_H__
#define __BASE_H__

class Base {
    public:
     virtual ~Base();
};

class A : public Base{};

class B : public Base{};

class C : public Base{};

Base    *genrate(void);
void    identify(Base *p);
void    identify(Base &p);

#endif // __BASE_H__
/* ************************************************************************** */
