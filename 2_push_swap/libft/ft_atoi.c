/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 17:54:17 by pnolte            #+#    #+#             */
/*   Updated: 2022/08/04 10:56:15 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "../include/push_swap.h"

static void	checker_for_atoi(char *str)
{
	int	i;

	i = 0;
	if (str[i + 1] == '\0' && (str[i] == '-' || str[i] == '+'))
	{
		write(2, "Error\n", 6);
		my_exit(1);
	}
	if (str[i] == '-' || str[i] == '+' || (str[i] <= '9' && str[i] >= '0'))
		i++;
	if (i == 0)
	{
		write(2, "Error\n", 6);
		my_exit(1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			write(2, "Error\n", 6);
			my_exit(1);
		}
		i++;
	}
}

static void	check_for_maxmin_int(long res, int sign)
{
	if (res * sign > 2147483647 || res * sign < -2147483648)
	{
		write(2, "Error\n", 6);
		my_exit(1);
	}
}

long	ft_atoi(char *str)
{
	long		res;
	int			index;
	int			sign;

	index = 0;
	sign = 1;
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
	check_for_maxmin_int(res, sign);
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
