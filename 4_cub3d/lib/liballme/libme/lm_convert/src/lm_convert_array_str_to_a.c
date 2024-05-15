/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_convert_array_str_to_a.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:48:45 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/17 14:41:06 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>	// needed for NULL, malloc()

static size_t	count_arguments(char **array_to_count)
{
	size_t	index;

	index = 0;
	while (array_to_count[index] != NULL)
	{
		index += 1;
	}
	return (index);
}

static size_t	count_length(char **array_to_count)
{
	size_t	index_array;
	size_t	index_str;
	size_t	input_length;

	index_array = 0;
	index_str = 0;
	input_length = 0;
	while (array_to_count[index_array] != NULL)
	{
		while (array_to_count[index_array][index_str] != '\0')
		{
			index_str += 1;
		}
		input_length = input_length + index_str;
		index_str = 0;
		index_array += 1;
	}
	return (input_length);
}

static char	*merge(char **array_to_combine, char *str_merge)
{
	size_t	index_array;
	size_t	index_str;
	size_t	input_length;

	index_str = 0;
	index_array = 0;
	input_length = 0;
	while (array_to_combine[index_array] != NULL)
	{
		while (array_to_combine[index_array][index_str] != '\0')
		{
			str_merge[input_length]
				= array_to_combine[index_array][index_str];
			input_length += 1;
			index_str += 1;
		}
		str_merge[input_length++] = ' ';
		index_str = 0;
		index_array += 1;
	}
	str_merge[input_length - 1] = '\0';
	return (str_merge);
}

char	*lm_convert_array_str_to_a(char **array_to_convert)
{
	char	*str_return;

	if (array_to_convert == NULL)
		return (NULL);
	str_return = (char *) malloc (sizeof (char)
			* count_length(array_to_convert)
			+ count_arguments(array_to_convert));
	if (str_return == NULL)
		return (NULL);
	str_return = merge(array_to_convert, str_return);
	return (str_return);
}
