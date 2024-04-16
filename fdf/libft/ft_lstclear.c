/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 10:13:20 by pnolte            #+#    #+#             */
/*   Updated: 2022/07/22 09:09:13 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_stack **lst, void (*del)(int))
{
	t_stack	*cpy;

	while (*lst != NULL)
	{
		cpy = (*lst)->next;
		(*del)((*lst)->nbr);
		free(*lst);
		*lst = cpy;
	}
	*lst = NULL;
}
