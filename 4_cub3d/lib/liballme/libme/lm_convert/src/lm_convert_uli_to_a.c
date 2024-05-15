/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_convert_uli_to_a.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 12:41:59 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/03 19:24:09 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"	// needed for ft_strdup(), ft_strlen(),  NULL, malloc()

static void	str_reverse(char *str_to_reverse)
{
	char	c_to_save;
	int		length;
	int		index;

	index = 0;
	if (str_to_reverse == NULL)
	{
		return ;
	}
	length = ft_strlen(str_to_reverse);
	while (index < length / 2)
	{
		c_to_save = str_to_reverse[index];
		str_to_reverse[index] = str_to_reverse[length - 1 - index];
		str_to_reverse[length - 1 - index] = c_to_save;
		index += 1;
	}
}

static int	get_digits(unsigned long int int_to_convert)
{
	int	index;

	index = 0;
	while (int_to_convert > 0)
	{
		int_to_convert = int_to_convert / 10;
		index++;
	}
	return (index);
}

static char	*ulint_to_string(unsigned long int int_to_convert)
{
	unsigned long int	int_remain;
	char				*string_return;
	int					index;

	int_remain = 0;
	string_return = NULL;
	index = 0;
	string_return = malloc (sizeof (char)
			* get_digits(int_to_convert) + 1);
	if (string_return == NULL)
		return (NULL);
	while (int_to_convert != 0)
	{
		int_remain = int_to_convert % 10;
		if (int_remain < 10)
			string_return[index] = '0' + int_remain;
		int_to_convert = int_to_convert / 10;
		index++;
	}
	string_return[index] = '\0';
	return (string_return);
}

char	*lm_convert_uli_to_a(unsigned long int int_to_convert)
{
	char	*string_return;

	string_return = NULL;
	if (int_to_convert == 0)
	{
		return (ft_strdup("0"));
	}
	string_return = ulint_to_string(int_to_convert);
	if (string_return == NULL)
		return (NULL);
	str_reverse(string_return);
	return (string_return);
}
