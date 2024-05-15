/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_str_check_set_duplicate.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 15:59:56 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/17 16:40:31 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>	// needed for ft_str_check_duplicate_char(), NULL, size_t
#include <lm_str.h>

char	lm_str_check_set_duplicate(const char *str_to_check,
			const char *set_to_check)
{
	size_t	index_set;

	index_set = 0;
	while (str_to_check != NULL && set_to_check != NULL
		&& set_to_check[index_set] != '\0')
	{
		if (lm_str_check_char_duplicate(str_to_check,
				set_to_check[index_set]) == 1)
		{
			return (1);
		}
		index_set += 1;
	}
	return (0);
}
