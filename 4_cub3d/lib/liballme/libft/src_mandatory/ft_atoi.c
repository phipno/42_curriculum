/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 10:49:18 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/03 21:08:42 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>	// needed for NULL

static int	str_iter_spaces(const char *str_to_convert, int index)
{
	while ((str_to_convert[index] == '\b')
		|| (str_to_convert[index] == '\t')
		|| (str_to_convert[index] == '\v')
		|| (str_to_convert[index] == '\n')
		|| (str_to_convert[index] == '\v')
		|| (str_to_convert[index] == '\f')
		|| (str_to_convert[index] == '\r')
		|| (str_to_convert[index] == ' '))
		index++;
	return (index);
}

static int	str_to_int(const char *str_to_convert,
						int index, int sign_algebraic)
{
	size_t	int_return;

	int_return = 0;
	if (!(str_to_convert[index] >= 48 && str_to_convert[index] <= 57))
		return (0);
	while (str_to_convert[index] != '\0'
		&& str_to_convert[index] >= 48
		&& str_to_convert[index] <= 57)
	{
		if ((long) int_return * sign_algebraic > 2147483647)
			return (-1);
		else if (((long) int_return * sign_algebraic) < -2147483648)
			return (0);
		int_return = (int_return * 10) + (str_to_convert[index] - 48);
		index++;
	}
	return ((int) int_return * sign_algebraic);
}

int	ft_atoi(const char *str_to_convert)
{
	int		index;
	int		sign_algebraic;

	index = 0;
	sign_algebraic = 1;
	if (str_to_convert == NULL)
		return (0);
	index = str_iter_spaces(str_to_convert, index);
	if (str_to_convert[index] == '+' || str_to_convert[index] == '-')
	{
		if (str_to_convert[index] == '-')
			sign_algebraic = -1;
		index++;
	}
	return (str_to_int(str_to_convert, index, sign_algebraic));
}
