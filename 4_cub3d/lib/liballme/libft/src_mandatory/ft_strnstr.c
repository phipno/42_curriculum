/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 10:36:50 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/03 21:16:34 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>	// needed for ft_strlen(), NULL, size_t

char	*ft_strnstr(const char *haystack, const char *needle, size_t length)
{
	size_t	index;
	size_t	counter_needle;

	index = 0;
	counter_needle = 0;
	if (ft_strlen(needle) <= 0)
	{
		return ((char *) haystack);
	}
	while (index < length && haystack[index] != '\0')
	{
		counter_needle = 0;
		if (haystack[index] == needle[0])
		{
			while (haystack[index + counter_needle] == needle[counter_needle]
				&& index + counter_needle < length)
			{
				if (needle [counter_needle + 1] == '\0')
					return ((char *) haystack + index);
				counter_needle++;
			}
		}
		index += 1;
	}
	return (NULL);
}
