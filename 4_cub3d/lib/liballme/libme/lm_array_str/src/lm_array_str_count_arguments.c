/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_str_array_count_arguments.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 13:42:03 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/03 18:36:04 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>	// needed for NULL

size_t	lm_array_str_count_arguments(char **array_to_count)
{
	size_t	index;

	index = 0;
	while (array_to_count[index] != NULL)
	{
		index += 1;
	}
	return (index);
}
