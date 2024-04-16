/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_and_search.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 11:32:14 by pnolte            #+#    #+#             */
/*   Updated: 2022/08/03 11:59:29 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	find_max(t_stack *stack, t_vars *vars, char *flex)
{
	t_stack	*cpy;

	cpy = stack;
	if (ft_strcmp(flex, "index") == 0)
	{
		vars->max = stack->index;
		while (cpy != NULL)
		{
			if (cpy->index > vars->max)
				vars->max = cpy->index;
			cpy = cpy->next;
		}
	}
	if (ft_strcmp(flex, "nbr") == 0)
	{
		vars->max = stack->nbr;
		while (cpy != NULL)
		{
			if (cpy->nbr > vars->max)
				vars->max = cpy->nbr;
			cpy = cpy->next;
		}
	}
}

void	find_smaller(t_stack *stack, t_vars *vars)
{
	t_stack	*cpy;

	cpy = stack;
	while (cpy != NULL)
	{
		if (vars->smallest == vars->smaller
			|| (cpy->nbr > vars->smallest && cpy->nbr < vars->smaller))
			vars->smaller = cpy->nbr;
		cpy = cpy->next;
	}
}

void	find_small(t_stack *stack, t_vars *vars, char *flex)
{
	t_stack	*cpy;

	cpy = stack;
	vars->smallest = vars->max;
	vars->smaller = stack->nbr;
	while (cpy != NULL)
	{
		if (ft_strcmp(flex, "indexing") == 0)
		{
			if (cpy->index == -1 && cpy->nbr < vars->smallest)
				vars->smallest = cpy->nbr;
		}
		else if (cpy->nbr < vars->smallest)
			vars->smallest = cpy->nbr;
		cpy = cpy->next;
	}
	if (ft_strcmp(flex, "smaller") == 0)
		find_smaller(stack, vars);
}

int	location(t_stack *stack, int nbr, char *flex)
{
	t_stack	*cpy;
	int		location;

	cpy = stack;
	location = 0;
	if (ft_strcmp(flex, "index") == 0)
	{
		while (cpy->index != nbr)
		{
			location++;
			cpy = cpy->next;
		}
	}
	if (ft_strcmp(flex, "nbr") == 0)
	{
		while (cpy->nbr != nbr)
		{
			location++;
			if (cpy->next == NULL)
				break ;
			cpy = cpy->next;
		}
	}
	return (location);
}
