/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 13:23:35 by pnolte            #+#    #+#             */
/*   Updated: 2022/08/05 16:20:34 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	my_exit(int exit_code)
{
	exit(exit_code);
}

void	decider(t_stack **stack_a, t_stack **stack_b)
{
	t_vars	vars;

	vars.size = ft_lstcount(*stack_a);
	if (vars.size < 2)
		swap_a(stack_a, "print");
	else if (vars.size < 3)
		sort_3_numbers(stack_a);
	else if (vars.size < 5)
	{
		find_max(*stack_a, &vars, "nbr");
		find_small(*stack_a, &vars, "smaller");
		sort_5_numbers(stack_a, stack_b, vars);
	}
	else
		sort_big_numbers(stack_a, stack_b, vars);
}

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (argc < 2)
		return (1);
	init_stack_a(argc, argv, &stack_a);
	stack_b = NULL;
	if (check_if_sorted(stack_a) == 0)
		my_exit(1);
	decider(&stack_a, &stack_b);
	if (check_if_sorted(stack_a) == 0)
		freeee(&stack_a, &stack_b);
	else
	{
		write(2, "Error\n", 6);
		my_exit(1);
	}
	return (0);
}
