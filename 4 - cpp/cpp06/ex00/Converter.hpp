/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:26:07 by pnolte            #+#    #+#             */
/*   Updated: 2023/07/11 15:35:27 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCALAR_H__
#define __SCALAR_H__

#include <string>


class ScalarConverter {
    public:
     static int convert(std::string const &input);
     
    private:
     ScalarConverter(void);
     ScalarConverter(ScalarConverter const &Src);
     ~ScalarConverter(void);

     ScalarConverter &operator=(ScalarConverter const &Src);
};

#endif // __SCALAR_H__
/* ************************************************************************** */
