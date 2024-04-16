/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 13:01:12 by pnolte            #+#    #+#             */
/*   Updated: 2023/07/12 13:32:37 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DATA_H__
#define __DATA_H__

class Data {
    public:
     Data();
     Data(int data);
     ~Data();
     Data(Data const &Src);

     Data &operator=(Data const &Src);
    
     int getData();
     
    private:
     int _data;
};

#endif // __DATA_H__
/* ************************************************************************** */