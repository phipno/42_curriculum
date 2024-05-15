/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_str_check_char_duplicate.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 15:49:58 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/03 17:46:02 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>	// needed for NULL, size_t

char	lm_str_check_char_duplicate(const char *str_to_check,
			const char c_to_check)
{
	size_t	index;
	char	flag;

	index = 0;
	flag = 0;
	while (str_to_check != NULL && str_to_check[index] != '\0')
	{
		if (str_to_check[index] == c_to_check && flag == 0)
		{
			flag = 1;
		}
		else if (str_to_check[index] == c_to_check && flag == 1)
		{
			return (1);
		}
		index += 1;
	}
	return (0);
}
