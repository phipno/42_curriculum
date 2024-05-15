/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:03:26 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/03 21:09:12 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>	// needed for NULL, malloc()

static int	get_digits(int int_to_convert, int int_digits)
{
	while (int_to_convert / 10 != 0)
	{
		int_to_convert = int_to_convert / 10;
		int_digits++;
	}
	return (int_digits);
}

static char	*int_to_str_negative(char *str_return, int int_to_convert,
			int int_digits)
{
	int_digits++;
	int_digits = get_digits(int_to_convert, int_digits);
	str_return = malloc (sizeof(char) * (int_digits + 1));
	if (str_return == NULL)
		return (NULL);
	str_return[int_digits] = '\0';
	str_return[0] = '-';
	int_digits--;
	while (int_digits > 0)
	{
		str_return[int_digits] = '0' + (int_to_convert % -10 * -1);
		int_to_convert = int_to_convert / 10;
		int_digits--;
	}
	return (str_return);
}

static char	*int_to_str_positive(char *str_return, int int_to_convert,
			int int_digits)
{
	int_digits = get_digits(int_to_convert, int_digits);
	str_return = malloc (sizeof(char) * (int_digits + 1));
	if (str_return == NULL)
		return (NULL);
	str_return[int_digits] = '\0';
	int_digits--;
	while (int_digits >= 0)
	{
		str_return[int_digits] = (int_to_convert % 10) + '0';
		int_to_convert = int_to_convert / 10;
		int_digits--;
	}
	return (str_return);
}

char	*ft_itoa(int int_to_convert)
{
	int		int_digits;
	char	*str_return;

	int_digits = 1;
	str_return = NULL;
	if (int_to_convert < 0)
		str_return = int_to_str_negative(str_return, int_to_convert,
				int_digits);
	else if (int_to_convert > 0)
		str_return = int_to_str_positive(str_return, int_to_convert,
				int_digits);
	else if (int_to_convert == 0)
	{
		str_return = malloc (sizeof(char) * (2));
		if (str_return == NULL)
			return (NULL);
		str_return[0] = '0';
		str_return[1] = '\0';
	}
	return (str_return);
}
