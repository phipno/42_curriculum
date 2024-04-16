/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 12:58:26 by pnolte            #+#    #+#             */
/*   Updated: 2023/05/08 13:35:46 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"
#include "brain.hpp"

static void test_deep_copy() {
    Dog doggy = Dog();
    Dog doggy_copy = doggy;

    std::cout << doggy.getBrain() << " " << doggy.getBrain()->getIdea(0) << std::endl;
    std::cout << doggy_copy.getBrain() << " " << doggy_copy.getBrain()->getIdea(0) << std::endl;

    doggy.getBrain()->setBrain(0, "food");

    std::cout << doggy.getBrain() << " " << doggy.getBrain()->getIdea(0) << std::endl;
    std::cout << doggy_copy.getBrain() << " " << doggy_copy.getBrain()->getIdea(0) << std::endl;

    Cat *catty = new Cat();
    Cat *catty_copy = catty;

    std::cout << catty->getBrain() << " " << catty->getBrain()->getIdea(0) << std::endl;
    std::cout << catty_copy->getBrain() << " " << catty_copy->getBrain()->getIdea(0) << std::endl;

    catty->getBrain()->setBrain(0, "chill");

    std::cout << catty->getBrain() << " " << catty->getBrain()->getIdea(0) << std::endl;
    std::cout << catty_copy->getBrain() << " " << catty_copy->getBrain()->getIdea(0) << std::endl;

    delete catty;
}

static void test_loop() {
    Animal *array[100];

    for (int i = 0; i < 100; i++) {
        if (i % 2 == 0)
            array[i] = new Dog();
        else
            array[i] = new Cat();
    }
    for (int i = 0; i < 100; i++)
        delete array[i];
}

static void test_subject() {
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;
}

int main()
{
    test_subject();
    std::cout << "\n/* ************************************************************************** */\n\n";
    test_loop();
    std::cout << "\n/* ************************************************************************** */\n\n";
    test_deep_copy();
    system("leaks brains");
    return 0;
}

/* ************************************************************************** */
