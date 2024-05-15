/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 18:42:14 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/03 21:08:50 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>	// needed for ft_memset(), size_t

void	ft_bzero(void *ptr, size_t bytes)
{
	if (bytes > 0)
		ft_memset(ptr, 0, bytes);
}
