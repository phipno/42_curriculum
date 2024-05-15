/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 11:02:33 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/03 21:08:25 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdint.h>

void	*ft_calloc(size_t count, size_t bytes)
{
	void	*ptr;

	if (count != 0 && bytes > SIZE_MAX / count)
		return (NULL);
	ptr = (void *)malloc(count * bytes);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, count * bytes);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
