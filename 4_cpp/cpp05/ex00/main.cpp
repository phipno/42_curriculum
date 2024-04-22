/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 10:18:58 by pnolte            #+#    #+#             */
/*   Updated: 2023/07/03 14:43:52 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    Bureaucrat  Kevin(1, "Kevin");
    Bureaucrat  Philipp(150, "Nolte");
    Bureaucrat  Normal(90, "Normal");
    Bureaucrat  Copy1(Kevin);
    Bureaucrat  Copy2;

    std::cout << "Copy Constructor Test:\n";
    std::cout << Copy1 << std::endl;
    
    std::cout << "Copy Assignment Test:\n";
    std::cout << Copy2;
    Copy2 = Copy1;
    std::cout << Copy2 << std::endl;

    std::cout << "Normal Test:\n";
    std::cout << Normal;
    Normal.incrementGrade();
    std::cout << Normal;
    Normal.decrementGrade();
    std::cout << Normal << std::endl;

    std::cout << "Kevin Increment Test:\n";
    std::cout << Kevin;
    Kevin.incrementGrade();
    Kevin.decrementGrade();
    std::cout << Kevin <<std::endl;

    std::cout << "Philipp Decrement Test:\n";
    std::cout << Philipp;
    Philipp.decrementGrade();
    Philipp.incrementGrade();
    std::cout << Philipp <<std::endl;
}

/* ************************************************************************** */
