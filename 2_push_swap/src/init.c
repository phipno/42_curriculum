/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 11:21:03 by pnolte            #+#    #+#             */
/*   Updated: 2022/08/08 16:35:35 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	check_if_double(t_stack *stack)
{
	t_stack	*cpy;
	t_stack	*cpy2;
	int		i;

	i = 0;
	cpy2 = stack;
	if (stack == NULL)
		return ;
	while (cpy2->next != NULL)
	{
		cpy = cpy2;
		while (cpy != NULL)
		{
			if (cpy2->nbr == cpy->nbr)
				i++;
			cpy = cpy->next;
		}
		cpy2 = cpy2->next;
	}
	if (i > ft_lstcount(stack))
	{
		write(2, "Error\n", 6);
		my_exit(1);
	}
}

void	init_stack_a(int argc, char **argv, t_stack **stack)
{
	int		j;
	int		i;
	t_stack	*new;
	char	**split;

	j = 1;
	while (j < argc)
	{
		split = ft_split(argv[j], ' ');
		i = 0;
		while (split[i] != NULL)
		{
			new = ft_lstnew(ft_atoi(split[i]));
			i++;
			if (*stack == NULL)
				*stack = new;
			else
				ft_lstadd_back(*stack, new);
		}
		new = *stack;
		check_if_double(*stack);
		free(split);
		j++;
	}
}
