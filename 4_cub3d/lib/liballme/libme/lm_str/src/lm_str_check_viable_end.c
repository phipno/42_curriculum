/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_str_check_viable_end.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 13:33:11 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/24 13:36:45 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"	// needed for ft_strlen(), ft_strncmp()
#include <stdlib.h>	// needed for size_t

char	lm_str_check_viable_end(const char *str_to_check, const char *end)
{
	size_t		length_str;
	size_t		length_end;
	const char	*offset;

	length_str = ft_strlen(str_to_check);
	length_end = ft_strlen(end);
	offset = str_to_check + length_str - length_end;
	if (ft_strncmp(offset, end, length_end) == 0)
	{
		return (1);
	}
	return (0);
}
