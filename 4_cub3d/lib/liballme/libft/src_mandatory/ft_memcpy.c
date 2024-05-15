/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 18:59:15 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/03 21:09:44 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>	// needed for size_t

void	*ft_memcpy(void *ptr_dst, const void *ptr_src, size_t bytes)
{
	size_t	index;

	index = 0;
	if (ptr_dst == ptr_src)
		return (ptr_dst);
	while (index < bytes)
	{
		((char *) ptr_dst)[index] = ((char *) ptr_src)[index];
		index++;
	}
	return (ptr_dst);
}
