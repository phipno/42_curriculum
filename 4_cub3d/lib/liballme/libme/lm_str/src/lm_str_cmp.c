/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_str_cmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 11:07:26 by pnolte            #+#    #+#             */
/*   Updated: 2023/05/24 10:42:32 by jwillert         ###   ########          */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>	// needed for size_t

int	lm_str_cmp(const char *string_first, const char *string_second)
{
	size_t	index;

	index = 0;
	while ((string_first[index] != '\0' || string_second[index] != '\0'))
	{
		if (string_first[index] != string_second[index])
			return ((unsigned char)string_first[index]
				- (unsigned char)string_second[index]);
		index++;
	}
	return (0);
}
