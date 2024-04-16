/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 10:18:58 by pnolte            #+#    #+#             */
/*   Updated: 2023/07/03 17:36:05 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

#include <string>

int main() {
    Bureaucrat  Kevin(1, "Kevin");
    Bureaucrat  Philipp(150, "Nolte");
    Bureaucrat  Normal(90, "Normal");
    Bureaucrat  Copy1(Kevin);
    Bureaucrat  Copy2;
    Form        Form1("Form for a Cat in 42", 10, 10);
    Form        Form2("Form for a Dog in 42", 100, 100);
    Form        CopyForm1(Form1);
    Form        CopyForm2;

    std::cout << "Copy Constructor Test:\n";
    std::cout << CopyForm1 << std::endl;
    
    std::cout << "Copy Assignment Test:\n";
    std::cout << CopyForm2;
    CopyForm2 = CopyForm1;
    std::cout << CopyForm2 << std::endl;
    CopyForm2 = CopyForm1;
    
    std::cout << "Kevin Sign Test:\n";
    std::cout << Form1;
    Form1.beSigned(Kevin);
    Form1.signForm(Kevin);
    std::cout << std::endl;

    std::cout << "Philipp Sign Test:\n";
    std::cout << Form2;
    Form2.beSigned(Philipp);
    Form2.signForm(Philipp);
    std::cout << std::endl;
}

/* ************************************************************************** */
