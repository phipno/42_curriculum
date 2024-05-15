/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_str_count_needle_appended.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 11:54:33 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/17 16:32:38 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>	// needed for ft_strlen()

static char	needle_count_occasions(const char *haystack,
				const char *needle_first, const char *needle_second,
				size_t index_haystack)
{
	size_t	index_needle_first;
	size_t	index_needle_second;

	index_needle_first = 0;
	index_needle_second = 0;
	while (haystack[index_haystack + index_needle_first]
		== needle_first[index_needle_first]
		&& needle_first[index_needle_first] != '\0')
	{
		if (needle_first[index_needle_first + 1] == '\0')
		{
			index_needle_first++;
			while (haystack[index_haystack + index_needle_first
					+ index_needle_second]
				== needle_second[index_needle_second])
			{
				if (needle_second[index_needle_second + 1] == '\0')
					return (1);
				index_needle_second++;
			}
		}
		index_needle_second = 0;
		index_needle_first++;
	}
	return (0);
}

static void	update_values(const char *needle_a, const char *needle_b,
			size_t *counter_occasions, size_t *index_haystack)
{
	*counter_occasions = *counter_occasions + 1;
	*index_haystack = *index_haystack + ft_strlen(needle_a)
		+ ft_strlen(needle_b) - 1;
}

size_t	lm_str_count_needles_appended(const char *haystack,
					const char *needle_a, const char *needle_b)
{
	size_t	index_haystack;
	size_t	counter_occasions;

	index_haystack = 0;
	counter_occasions = 0;
	while (haystack[index_haystack] != '\0')
	{
		if (haystack[index_haystack] == needle_a[0])
		{
			if (needle_count_occasions(haystack, needle_a,
					needle_b, index_haystack) == 1)
				update_values(needle_a, needle_b, &counter_occasions,
					&index_haystack);
		}
		if (haystack[index_haystack] == needle_b[0])
		{
			if (needle_count_occasions(haystack, needle_b,
					needle_a, index_haystack) == 1)
				update_values(needle_a, needle_b, &counter_occasions,
					&index_haystack);
		}
		index_haystack++;
	}
	return (counter_occasions);
}
