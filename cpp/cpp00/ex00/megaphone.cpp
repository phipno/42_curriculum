/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 18:13:04 by pnolte            #+#    #+#             */
/*   Updated: 2023/04/12 16:33:53 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char *argv[])
{
	int				i = 0;
	int				j = 1;
	unsigned char	c;

	if (argc > 1)
	{
		while (j < argc)
		{
			i = 0;
			while (argv[j][i] != '\0')
			{
				c = argv[j][i];
				argv[j][i] = toupper(c);
				std::cout << argv[j][i];
				i++;
			}
			std::cout << ' ';
			j++;
		}
		std::cout << '\n';
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	return 0;
}

/* ************************************************************************** */
