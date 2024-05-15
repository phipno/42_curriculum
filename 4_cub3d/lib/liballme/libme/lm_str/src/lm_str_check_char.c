/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_str_check_char.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:50:04 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/03 17:45:57 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>	// needed for size_t, NULL

char	lm_str_check_char(const char *str_to_search, char char_to_find)
{
	size_t	index;

	index = 0;
	if (str_to_search == NULL)
	{
		return (0);
	}
	while (str_to_search[index] != '\0')
	{
		if (str_to_search[index] == char_to_find)
		{
			return (1);
		}
		index++;
	}
	return (0);
}
