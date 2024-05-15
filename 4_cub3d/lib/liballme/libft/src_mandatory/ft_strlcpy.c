/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 13:15:49 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/03 21:15:18 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>	// needed for ft_strlen()

size_t	ft_strlcpy(char *str_target, const char *str_source, size_t size_needed)
{
	size_t	index;

	index = 0;
	if (size_needed <= 0)
		return (ft_strlen(str_source));
	while (index < (size_needed - 1) && str_source[index] != '\0')
	{
		str_target[index] = str_source[index];
		index++;
	}
	if (index < size_needed)
		str_target[index] = '\0';
	while (str_source[index] != '\0')
		index++;
	return (index);
}
