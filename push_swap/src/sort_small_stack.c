/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 13:13:10 by pnolte            #+#    #+#             */
/*   Updated: 2022/08/03 11:49:16 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sort_3_numbers(t_stack **sta_a)
{
	t_stack	*end;

	end = *sta_a;
	end = ft_lstlast(end);
	if ((*sta_a)->nbr > (*sta_a)->next->nbr && end->nbr > (*sta_a)->nbr
		&& end->nbr > (*sta_a)->next->nbr)
		swap_a(sta_a, "print");
	else if ((*sta_a)->nbr > (*sta_a)->next->nbr && end->nbr < (*sta_a)->nbr
		&& end->nbr < (*sta_a)->next->nbr)
	{
		swap_a(sta_a, "print");
		reverse_rotate_a(sta_a, "print");
	}
	else if ((*sta_a)->nbr > (*sta_a)->next->nbr && end->nbr < (*sta_a)->nbr
		&& end->nbr > (*sta_a)->next->nbr)
		rotate_a(sta_a, "print");
	else if ((*sta_a)->nbr < (*sta_a)->next->nbr && end->nbr > (*sta_a)->nbr
		&& end->nbr < (*sta_a)->next->nbr)
	{
		swap_a(sta_a, "print");
		rotate_a(sta_a, "print");
	}
	else if ((*sta_a)->nbr < (*sta_a)->next->nbr && end->nbr < (*sta_a)->nbr
		&& end->nbr < (*sta_a)->next->nbr)
		reverse_rotate_a(sta_a, "print");
}

void	sort_5_numbers(t_stack **stack_a, t_stack **stack_b, t_vars vars)
{
	vars.location = location(*stack_a, vars.smallest, "nbr");
	while ((*stack_a)->nbr != vars.smallest)
	{
		if (vars.location <= (vars.size / 2))
			rotate_a(stack_a, "print");
		else
			reverse_rotate_a(stack_a, "print");
	}
	push_b(stack_a, stack_b);
	if (vars.size > 3)
	{
		vars.location = location(*stack_a, vars.smaller, "nbr");
		while ((*stack_a)->nbr != vars.smaller)
		{
			if (vars.location <= (vars.size / 2))
				rotate_a(stack_a, "print");
			else
				reverse_rotate_a(stack_a, "print");
		}
		push_b(stack_a, stack_b);
	}
	sort_3_numbers(stack_a);
	push_a(stack_a, stack_b);
	if (vars.size > 3)
		push_a(stack_a, stack_b);
}
