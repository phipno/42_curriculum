/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_str_check_viable_algebraic_signs.c              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 22:59:07 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/17 16:32:21 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>	// needed for size_t, NULL, ft_strlen(), ft_strncmp(),
					// ft_isdigit()

static char	check_needles(const char *haystack,
				const char **needles, size_t length)
{
	size_t	index;
	size_t	counter_needles;

	index = 0;
	counter_needles = 0;
	if (haystack == NULL || needles == NULL)
	{
		return (0);
	}
	index = 0;
	while (index < length && haystack[index] != '\0')
	{
		counter_needles = 0;
		while (needles[counter_needles] != NULL)
		{
			if (ft_strncmp(haystack + index, needles[counter_needles],
					ft_strlen(needles[counter_needles])) == 0)
			{
				return (1);
			}
			counter_needles += 1;
		}
		index += 1;
	}
	return (0);
}

static char	check_sign_precursor(const char *str_to_check, char c_precursor)
{
	size_t	index;

	if (str_to_check == NULL)
	{
		return (0);
	}
	index = 0;
	while (str_to_check[index] != '\0')
	{
		if (str_to_check[index] == '-' || str_to_check[index] == '+')
		{
			if (ft_isdigit(str_to_check[index + 1]) == 0
				|| (str_to_check[index - 1] != c_precursor && index > 0))
			{
				return (0);
			}
		}
		index += 1;
	}
	return (1);
}

char	lm_str_check_viable_algebraic_signs(const char *str_to_check)
{
	const char	*array[5];

	array[0] = "++";
	array[1] = "+-";
	array[2] = "-+";
	array[3] = "--";
	array[4] = NULL;
	if (check_needles(str_to_check, array, ft_strlen(str_to_check) == 1))
	{
		return (0);
	}
	if (check_sign_precursor(str_to_check, ' ') == 0)
	{
		return (0);
	}
	return (1);
}
