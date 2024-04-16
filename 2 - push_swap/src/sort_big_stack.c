/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:33:14 by pnolte            #+#    #+#             */
/*   Updated: 2022/08/03 16:46:34 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

/*sort_indexing is for changing all the numbers, so that [-10 -275785 0 56 4]
becomes [1 0 2 4 3]*/

void	sort_indexing(t_stack **stack_a, t_vars vars)
{
	t_stack	*tmp;
	int		i;

	i = 0;
	find_max(*stack_a, &vars, "nbr");
	while (i <= vars.size)
	{
		tmp = *stack_a;
		find_small(tmp, &vars, "indexing");
		while (location(tmp, vars.smallest, "nbr") != 0)
			tmp = tmp->next;
		tmp->index = i;
		i++;
	}
}

/*chunk_position finds numbers from chunks, a first number (hold_first)
at the top of the stack and a second number (hold_second) at the
bottom of the stack, then saves their location*/

void	chunk_position(t_stack *stack_a, t_vars *vars)
{
	t_stack	*cpy;

	cpy = stack_a;
	while (cpy != NULL)
	{
		if (cpy->index < vars->chunk * vars->multi)
		{
			vars->hold_first = location(stack_a, cpy->index, "index");
			break ;
		}
		cpy = cpy->next;
	}
	while (cpy != NULL)
	{
		if (cpy->index < vars->chunk * vars->multi)
			vars->hold_second = location(stack_a, cpy->index, "index");
		cpy = cpy->next;
	}
}

/*rra_or_ra is used after chunk_position and finds out if its faster
to put the first number (hold_first) or the second number (hold_second)
on top of stack_a*/

void	rra_or_ra(t_stack **stack_a, t_stack **stack_b, t_vars *vars)
{
	vars->size = ft_lstcount(*stack_a);
	if (vars->hold_first < (vars->size - vars->hold_second))
	{
		while (vars->hold_first != 0)
		{
			rotate_a(stack_a, "print");
			vars->hold_first--;
		}
	}
	else
	{
		while (vars->hold_second <= vars->size)
		{
			reverse_rotate_a(stack_a, "print");
			vars->hold_second++;
		}
	}
	push_b(stack_a, stack_b);
}

/*sort_and_push_a is the last function called and pushes the number that
are chunkly sorted in stack_b back to stack_a. Its finding the biggest
number in stack_b and rotates it, depending on location, to the to the
top of stack_b, then pushes to stack_a*/

void	sort_and_push_a(t_stack **stack_a, t_stack **stack_b, t_vars *vars)
{
	find_max(*stack_b, vars, "index");
	vars->size = ft_lstcount(*stack_b);
	while (location(*stack_b, vars->max, "index") != 0)
	{
		if (location(*stack_b, vars->max, "index") > vars->size / 2)
			reverse_rotate_b(stack_b, "print");
		else
			rotate_b(stack_b, "print");
		vars->location--;
	}
	push_a(stack_a, stack_b);
}

/*sort_big_numbers is main function for stacks that are bigger than 6*/

void	sort_big_numbers(t_stack **stack_a, t_stack **stack_b, t_vars vars)
{
	vars.round = 0;
	vars.multi = 1;
	vars.chunk = 40;
	if (vars.size <= 100)
		vars.chunk = 20;
	sort_indexing(stack_a, vars);
	while (ft_lstcount(*stack_a) != -1)
	{
		chunk_position(*stack_a, &vars);
		rra_or_ra(stack_a, stack_b, &vars);
		vars.round++;
		if (vars.round % vars.chunk == 0)
			vars.multi++;
	}
	while (*stack_b != NULL)
		sort_and_push_a(stack_a, stack_b, &vars);
}
