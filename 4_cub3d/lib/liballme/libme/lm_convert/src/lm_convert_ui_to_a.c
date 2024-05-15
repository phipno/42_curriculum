/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_unsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:03:26 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/03 16:19:06 by jwillert         ###   ########          */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>	// needed for NULL, malloc()

static int	get_digits(unsigned int uint_to_convert, int int_digits)
{
	while (uint_to_convert / 10 != 0)
	{
		uint_to_convert = uint_to_convert / 10;
		int_digits++;
	}
	return (int_digits);
}

static char	*uint_to_str(char *str_return,
		unsigned int uint_to_convert, int int_digits)
{
	int_digits = get_digits(uint_to_convert, int_digits);
	str_return = malloc (sizeof(char) * (int_digits + 1));
	if (str_return == NULL)
		return (NULL);
	str_return[int_digits] = '\0';
	int_digits--;
	while (int_digits >= 0)
	{
		str_return[int_digits] = (uint_to_convert % 10) + '0';
		uint_to_convert = uint_to_convert / 10;
		int_digits--;
	}
	return (str_return);
}

char	*lm_convert_ui_to_a(unsigned int uint_to_convert)
{
	int		int_digits;
	char	*str_return;

	int_digits = 1;
	str_return = NULL;
	if (uint_to_convert > 0)
		str_return = uint_to_str(str_return, uint_to_convert, int_digits);
	else if (uint_to_convert == 0)
	{
		str_return = malloc (sizeof(char) * (2));
		if (str_return == NULL)
			return (NULL);
		str_return[0] = '0';
		str_return[1] = '\0';
	}
	return (str_return);
}
