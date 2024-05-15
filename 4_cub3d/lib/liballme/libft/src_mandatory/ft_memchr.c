/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 15:04:31 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/03 21:09:22 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>	// needed for size_t, NULL

void	*ft_memchr(const void *ptr_to_search, int c_to_find, size_t bytes)
{
	size_t			index;
	unsigned char	*ptr;

	index = 0;
	ptr = (unsigned char *) ptr_to_search;
	while (index < bytes)
	{
		if (*ptr == (unsigned char) c_to_find)
			return (ptr);
		ptr++;
		index++;
	}
	ptr = NULL;
	return (ptr);
}
