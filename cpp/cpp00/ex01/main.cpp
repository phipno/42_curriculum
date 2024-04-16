/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 09:15:09 by pnolte            #+#    #+#             */
/*   Updated: 2023/04/14 20:40:35 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "phoneybook.hpp"

int main(void) {
	std::string	line;
	PhoneBook	book;

	while (42)
	{
		std::cout << "My PhoneyBook takes <ADD>, <SEARCH> and <EXIT>" << std::endl;
		std::cout << "📞📖:";
		std::getline(std::cin, line);
		if (line.empty() == false) {
			if (line == "ADD")
				book.Add(&book);
			else if (line == "SEARCH")
				book.Search(book);
			else if (line == "EXIT")
				return(EXIT_SUCCESS);
		}
	}
}

/* ************************************************************************** */
