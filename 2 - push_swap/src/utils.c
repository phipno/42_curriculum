/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 11:32:14 by pnolte            #+#    #+#             */
/*   Updated: 2022/08/03 16:06:49 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	check_if_sorted(t_stack *stack)
{
	int		i;
	t_stack	*cpy;

	cpy = stack;
	i = 0;
	while (cpy != NULL)
	{
		if (cpy->next == NULL)
			break ;
		if (cpy->nbr > cpy->next->nbr)
			i = 1;
		cpy = cpy->next;
	}
	return (i);
}

int	ft_lstcount(t_stack *stack)
{
	int	i;

	i = 0;
	if (stack == NULL)
		return (-1);
	while (stack->next != NULL)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}

void	freeee(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;

	while (*stack_b != NULL)
	{
		tmp = *stack_b;
		*stack_b = (*stack_b)->next;
		free(stack_b);
	}
	*stack_b = NULL;
	while (*stack_a != NULL)
	{
		tmp = *stack_a;
		*stack_a = (*stack_a)->next;
		free(tmp);
	}
	*stack_a = NULL;
}
