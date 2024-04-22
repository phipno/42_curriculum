/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 11:44:34 by pnolte            #+#    #+#             */
/*   Updated: 2022/08/03 11:51:48 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	reverse_rotate_a(t_stack **stack, char *print)
{
	t_stack	*cpy;
	t_stack	*cpy2;
	int		i;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		cpy = *stack;
		cpy2 = *stack;
		i = 0;
		while (cpy->next != NULL)
		{
			cpy = cpy->next;
			i++;
		}
		while (i > 1)
		{
			cpy2 = cpy2->next;
			i--;
		}
		cpy->next = *stack;
		cpy2->next = NULL;
		*stack = cpy;
		if (ft_strcmp(print, "print") == 0)
			write(1, "rra\n", 4);
	}
}

void	reverse_rotate_b(t_stack **stack, char *print)
{
	t_stack	*cpy;
	t_stack	*cpy2;
	int		i;

	if (*stack != NULL && (*stack)->next != NULL)
	{
		cpy = *stack;
		cpy2 = *stack;
		i = 0;
		while (cpy->next != NULL)
		{
			cpy = cpy->next;
			i++;
		}
		while (i > 1)
		{
			cpy2 = cpy2->next;
			i--;
		}
		cpy->next = *stack;
		cpy2->next = NULL;
		*stack = cpy;
		if (ft_strcmp(print, "print") == 0)
			write(1, "rrb\n", 4);
	}
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	reverse_rotate_a(stack_a, "if you print");
	reverse_rotate_b(stack_b, "you die");
	write(1, "rrr\n", 4);
}
