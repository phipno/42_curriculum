/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 17:54:17 by pnolte            #+#    #+#             */
/*   Updated: 2022/09/30 07:29:03 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../fdf.h"

static char	*checker_for_atoi(char *str)
{
	int	i;

	i = 0;
	if (str[i + 1] == '\0' && (str[i] == '-' || str[i] == '+'))
		return ("0");
	if (str[i] == '-' || str[i] == '+' || (str[i] <= '9' && str[i] >= '0'))
		i++;
	if (i == 0)
		return ("0");
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return ("0");
		i++;
	}
	return (str);
}

static long	check_for_maxmin_int(long res, int sign)
{
	if (res * sign > 2147483647 || res * sign < -2147483648)
		return (0);
	else
		return (res);
}

char	*remove_nl(char *str)
{
	char	*new;
	int		i;

	i = 0;
	if (str == NULL)
		return (str);
	while (str[i] != '\0' && str[i] != '\n')
		i++;
	if (str[i] == '\n' && i != 0)
	{
		new = malloc(sizeof(char) * (i + 1));
		if (new == NULL)
			my_exit(1);
		new[i] = '\0';
		i = 0;
		while (str[i] != '\n' && str[i] != '\0' && new[i] != '\0')
		{
			new[i] = str[i];
			i++;
		}	
		free(str);
		return (new);
	}
	return (str);
}

long	ft_atoi(char *str)
{
	long		res;
	int			index;
	int			sign;

	index = 0;
	sign = 1;
	str = remove_nl(str);
	checker_for_atoi(str);
	if (str[index] == '-')
	{
		sign = -1;
		index++;
	}
	else if (str[index] == '+')
		index++;
	res = 0;
	while (str[index] != '\0' && str[index] >= '0' && str[index] <= '9')
	{
		res = res * 10 + str[index] - '0';
		index++;
	}
	res = check_for_maxmin_int(res, sign);
	free(str);
	return (res * sign);
}

// int	main(void)
// {
// 	int	res;
// 	char str[] = "9223372036854775807";

// 	res = ft_atoi(str);
// 	printf("%d", res);
// }
