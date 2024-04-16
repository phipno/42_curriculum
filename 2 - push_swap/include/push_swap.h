/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 13:19:35 by pnolte            #+#    #+#             */
/*   Updated: 2022/08/05 16:07:01 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

/*t_vars used for easy variabel exchange and the linkes list t_stack
is declared in my libft.h*/

typedef struct s_vars
{
	int	smallest;
	int	smaller;
	int	max;
	int	location;
	int	size;
	int	hold_first;
	int	hold_second;
	int	multi;
	int	chunk;
	int	round;
}				t_vars;

/* operations we need to use to sort the stack*/
/*inside src/swap_push.c*/
void	swap_a(t_stack **stack, char *print);
void	swap_b(t_stack **stack, char *print);
void	push_a(t_stack **stack_a, t_stack **stack_b);
void	push_b(t_stack **stack_a, t_stack **stack_b);
void	ss(t_stack	**stack_a, t_stack	**stack_b);
/*inside src/rotate.c*/
void	rotate_a(t_stack **stack_a, char *print);
void	rotate_b(t_stack **stack_b, char *print);
void	rr(t_stack **stack_a, t_stack **stack_b);
/*inside src/reverse_rotate.c*/
void	reverse_rotate_a(t_stack **stack, char *print);
void	reverse_rotate_b(t_stack **stack, char *print);
void	rrr(t_stack **stack_a, t_stack **stack_b);

/* functions for parsing, initalsiang and checking input. the ft_atoi
is from my libft it was slightly changed for input handling*/
/*inside src/init.c*/
void	init_stack_a(int argc, char **argv, t_stack **stack_a);
void	check_if_double(t_stack *stack);

/*utils functions*/
/*inside src/main.c*/
void	decider(t_stack **stack_a, t_stack **stack_b);
void	my_exit(int exit_code);
/*inside src/utils.c*/
int		ft_lstcount(t_stack *stack);
void	freeee(t_stack **stack_a, t_stack **stack_b);
int		check_if_sorted(t_stack *stack_a);
/*inside src/find_and_search.c*/
void	find_small(t_stack *stack, t_vars *vars, char *flex);
void	find_smaller(t_stack *stack, t_vars *vars);
void	find_max(t_stack *stack, t_vars *vars, char *flex);
int		location(t_stack *stack, int nbr, char *flex);

/* src/sort_small_stack.c , the functions do what they are called*/
/*inside src/sort_small_stack.c*/
void	sort_3_numbers(t_stack **sta_a);
void	sort_5_numbers(t_stack **stack_a, t_stack **stack_b, t_vars vars);

/*sorts big Stacks for more than 5 Number*/
/*inside src/sort_big_stack.c*/
void	sort_big_numbers(t_stack **stack_a, t_stack **stack_b, t_vars vars);
void	sort_indexing(t_stack **stack_a, t_vars vars);
void	chunk_position(t_stack *stack_a, t_vars *vars);
void	rra_or_ra(t_stack **stack_a, t_stack **stack_b, t_vars *vars);
void	sort_and_push_a(t_stack **stack_a, t_stack **stack_b, t_vars *vars);
#endif
