/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 13:22:51 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/03 21:15:06 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>	// needed for ft_strlen()

size_t	ft_strlcat(char *str_target, const char *str_source, size_t size_needed)
{
	size_t	offset;
	size_t	size_target;
	size_t	size_source;

	size_target = ft_strlen(str_target);
	size_source = ft_strlen(str_source);
	if (size_target > size_needed)
		return (size_source + size_needed);
	offset = size_target;
	while (*str_source != '\0' && offset + 1 < size_needed)
	{
		str_target[offset] = *str_source;
		offset++;
		str_source++;
	}
	str_target[offset] = '\0';
	return (size_source + size_target);
}
