/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 15:11:58 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/03 21:09:36 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>	// needed for size_t

int	ft_memcmp(const void *str_first, const void *str_second, size_t bytes)
{
	size_t			index;
	unsigned char	*ptr_first;
	unsigned char	*ptr_second;

	index = 0;
	ptr_first = (unsigned char *) str_first;
	ptr_second = (unsigned char *) str_second;
	while (index < bytes)
	{
		if ((*ptr_first - *ptr_second) != 0)
			return (*ptr_first - *ptr_second);
		index++;
		ptr_first++;
		ptr_second++;
	}
	return (0);
}
