/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_str_duplicate_set.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:45:54 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/17 16:40:53 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lm_str.h>	// needed for lm_str_check_char(), NULL, malloc()

static size_t	count_char_found(char const *str_to_search,
						char const *str_set_to_find)
{
	size_t	counter;
	size_t	index;

	counter = 0;
	index = 0;
	while (str_to_search[index] != '\0')
	{
		if (lm_str_check_char(str_set_to_find, str_to_search[index]))
			counter++;
		index++;
	}
	return (counter);
}

char	*lm_str_duplicate_set(char const *str_to_search,
			char const *str_set_to_find)
{
	size_t	index;
	size_t	counter;
	char	*str_duplicate;

	index = 0;
	if (str_to_search == NULL || str_set_to_find == NULL)
		return (NULL);
	counter = count_char_found(str_to_search, str_set_to_find);
	if (counter == 0)
		return (NULL);
	str_duplicate = malloc (sizeof (char) * counter + 1);
	if (str_duplicate == NULL)
		return (NULL);
	counter = 0;
	while (str_to_search[index] != '\0')
	{
		if (lm_str_check_char(str_set_to_find, str_to_search[index]))
		{
			str_duplicate[counter] = str_to_search[index];
			counter++;
		}
		index++;
	}
	str_duplicate[counter] = '\0';
	return (str_duplicate);
}
