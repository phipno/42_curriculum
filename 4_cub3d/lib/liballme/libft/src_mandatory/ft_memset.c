/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 14:42:13 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/03 21:10:07 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>	// needed for size_T

void	*ft_memset(void *ptr, int c_value, size_t length)
{
	size_t			index;
	unsigned char	*ptr_new;

	index = 0;
	ptr_new = (unsigned char *)ptr;
	while (index < length)
	{
		ptr_new[index] = (unsigned char) c_value;
		index++;
	}
	return (ptr);
}
