/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_convert_a_to_ld.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 13:15:10 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/06 17:31:30 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>	// needed for ft_strchr(), ft_strlen()
#include <float.h>	// needed for MACROS

static int	check_algebraic_sign(char *str_to_check)
{
	if (*str_to_check == '-')
	{
		return (-1);
	}
	else if (*str_to_check == '+')
	{
		return (0);
	}
	return (1);
}

static long double	calculate_fractions(char *str_to_convert)
{
	char		*offset_point;
	char		*offset_end;
	long double	result;

	offset_point = ft_strchr(str_to_convert, '.');
	if (offset_point == NULL || *offset_point + 1 == '\0')
		return (LDBL_MIN);
	if (ft_strlen(offset_point) > 7)
		return (LDBL_MAX);
	result = 0;
	offset_end = offset_point;
	while (*offset_end != '\0')
		offset_end++;
	offset_end--;
	while (offset_end != offset_point)
	{
		result = result / 10 + (*offset_end - 48);
		offset_end--;
	}
	return (result / 10);
}

static long double	calculate_integer(char *str_to_convert)
{
	long double	result;
	size_t		counter;

	result = 0;
	counter = 0;
	while (*str_to_convert != '\0' && *str_to_convert != '.')
	{
		result = result * 10 + (*str_to_convert - 48);
		str_to_convert++;
		counter++;
	}
	if (counter > 10)
		return (LDBL_MAX);
	return (result);
}

long double	lm_convert_a_to_ld(char *str_to_convert)
{
	int			sign;
	long double	integer;
	long double	fractions;

	if (str_to_convert == NULL)
		return (LDBL_MIN);
	sign = check_algebraic_sign(str_to_convert);
	if (sign < 1)
	{
		if (sign == 0)
			sign = 1;
		str_to_convert++;
	}
	integer = calculate_integer(str_to_convert);
	if (integer == LDBL_MAX)
		return (LDBL_MAX);
	fractions = calculate_fractions(str_to_convert);
	if (fractions == LDBL_MAX)
		return (LDBL_MAX);
	else if (fractions == LDBL_MIN)
		return (integer * sign);
	return ((integer + fractions) * sign);
}
