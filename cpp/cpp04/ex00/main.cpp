/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/06 12:58:26 by pnolte            #+#    #+#             */
/*   Updated: 2023/05/06 15:33:25 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"

// static void test2() {
// 	const WrongAnimal* meta = new WrongAnimal();
// 	const WrongAnimal* i = new WrongCat();

// 	i->makeSound();
// 	meta->makeSound();

//     delete meta;
//     delete i;
// }

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete j;
	delete i;
	delete meta;

    // test2();

	system("leaks polymorphism");
    return 0;
}

/* ************************************************************************** */
