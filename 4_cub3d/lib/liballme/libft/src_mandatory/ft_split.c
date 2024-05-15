/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:03:11 by jwillert          #+#    #+#             */
/*   Updated: 2023/06/21 13:45:27 by jwillert         ###   ########          */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>	// needed for NULL, size_t, ft_substr(), free()

static size_t	count_words(char const *str_to_count, char c_delimiter)
{
	size_t	index;
	size_t	counter_words;

	index = 0;
	counter_words = 0;
	while (str_to_count[index] != '\0')
	{
		if (str_to_count[index] != c_delimiter
			&& (str_to_count[index + 1] == c_delimiter
				|| str_to_count[index + 1] == '\0'))
			counter_words++;
		index++;
	}
	return (counter_words);
}

static char	**free_array(char **array_to_free, size_t counter_words)
{
	while (counter_words > 0)
	{
		free(array_to_free[counter_words]);
		counter_words--;
	}
	free(array_to_free[counter_words]);
	free (array_to_free);
	return (NULL);
}

static char	**divide(char **array_str_split, char const *str_to_split,
						char c_delimiter)
{
	size_t	index;
	size_t	counter_words;
	size_t	length_str;

	index = 0;
	counter_words = 0;
	length_str = 0;
	while (str_to_split[index] != '\0')
	{
		if (str_to_split[index] != c_delimiter && (str_to_split
				[index + 1] == c_delimiter || str_to_split[index + 1] == '\0'))
		{
			array_str_split[counter_words] = ft_substr(str_to_split,
					index - length_str, length_str + 1);
			if (array_str_split[counter_words] == NULL)
				return (free_array(array_str_split, counter_words));
			counter_words++;
			length_str = 0;
		}
		else if (str_to_split[index] != c_delimiter)
			length_str++;
		index++;
	}
	array_str_split[counter_words++] = NULL;
	return (array_str_split);
}

char	**ft_split(char const *str_to_split, char c_delimiter)
{
	char	**array_str_split;

	if (str_to_split == NULL)
		return (NULL);
	array_str_split = (char **) malloc (sizeof(char *)
			* (count_words(str_to_split, c_delimiter) + 1));
	if (array_str_split == NULL)
		return (NULL);
	return (divide(array_str_split, str_to_split, c_delimiter));
}
