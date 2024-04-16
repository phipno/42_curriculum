/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 11:43:19 by pnolte            #+#    #+#             */
/*   Updated: 2022/08/03 11:51:18 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rotate_a(t_stack **stack_a, char *print)
{
	t_stack	*cpy;

	if (*stack_a != NULL && (*stack_a)->next != NULL)
	{
		cpy = *stack_a;
		*stack_a = ft_lstlast(*stack_a);
		(*stack_a)->next = cpy;
		*stack_a = (*stack_a)->next;
		cpy = cpy->next;
		(*stack_a)->next = NULL;
		*stack_a = cpy;
		if (ft_strcmp(print, "print") == 0)
			write(1, "ra\n", 3);
	}
}

void	rotate_b(t_stack **stack_b, char *print)
{
	t_stack	*cpy;

	if (*stack_b != NULL && (*stack_b)->next != NULL)
	{
		cpy = *stack_b;
		*stack_b = ft_lstlast(*stack_b);
		(*stack_b)->next = cpy;
		*stack_b = (*stack_b)->next;
		cpy = cpy->next;
		(*stack_b)->next = NULL;
		*stack_b = cpy;
		if (ft_strcmp(print, "print") == 0)
			write(1, "rb\n", 3);
	}
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	rotate_a(stack_a, "cool, cool, cool");
	rotate_b(stack_b, "never print");
	write(1, "rr\n", 3);
}
