/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_push.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 11:37:50 by pnolte            #+#    #+#             */
/*   Updated: 2022/08/03 11:47:51 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	swap_a(t_stack **stack, char *print)
{
	t_stack	*new;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		new = *stack;
		new = (*stack)->next;
		(*stack)->next = new->next;
		new->next = *stack;
		*stack = new;
		if (ft_strcmp(print, "print") == 0)
			write(1, "sa\n", 3);
	}
}

void	swap_b(t_stack **stack, char *print)
{
	t_stack	*new;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		new = *stack;
		new = (*stack)->next;
		(*stack)->next = new->next;
		new->next = *stack;
		*stack = new;
		if (ft_strcmp(print, "print") == 0)
			write(1, "sb\n", 3);
	}
}

void	ss(t_stack	**stack_a, t_stack	**stack_b)
{
	swap_a(stack_a, "hello there traveller");
	swap_b(stack_b, "this is not getiing printed");
	write(1, "ss\n", 3);
}

void	push_a(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*new;

	if (*stack_a != NULL && *stack_b != NULL)
	{
		new = *stack_b;
		*stack_b = (*stack_b)->next;
		new->next = *stack_a;
		*stack_a = new;
	}
	else if (*stack_a == NULL)
	{
		new = *stack_b;
		*stack_b = (*stack_b)->next;
		*stack_a = new;
		(*stack_a)->next = NULL;
	}
	write(1, "pa\n", 3);
}

void	push_b(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*new;

	if (*stack_a != NULL && *stack_b != NULL)
	{
		new = *stack_a;
		*stack_a = (*stack_a)->next;
		new->next = *stack_b;
		*stack_b = new;
	}
	else if (*stack_b == NULL)
	{
		new = *stack_a;
		*stack_a = (*stack_a)->next;
		*stack_b = new;
		(*stack_b)->next = NULL;
	}
	write(1, "pb\n", 3);
}
