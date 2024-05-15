/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_str_check_needle.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:53:51 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/17 16:32:02 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>	// needed for NULL, size_t, ft_strlen()

static int	loop_and_check_for_needle(const char *haystack,
			const char *needle, size_t length)
{
	size_t	index;
	size_t	counter_needle;

	index = 0;
	counter_needle = 0;
	while (index < length && haystack[index] != '\0')
	{
		counter_needle = 0;
		if (haystack[index] == needle[0])
		{
			while (haystack[index + counter_needle] == needle[counter_needle]
				&& index + counter_needle < length)
			{
				if (needle [counter_needle + 1] == '\0')
					return (1);
				counter_needle++;
			}
		}
		index += 1;
	}
	return (0);
}

char	lm_str_check_needle(const char *haystack, const char *needle,
				size_t length)
{
	if (haystack == NULL || needle == NULL)
	{
		return (0);
	}
	if (ft_strlen(needle) == 0)
	{
		return (1);
	}
	return (loop_and_check_for_needle(haystack, needle, length));
}
