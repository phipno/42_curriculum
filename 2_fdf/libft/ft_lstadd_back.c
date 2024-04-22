/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 14:16:03 by pnolte            #+#    #+#             */
/*   Updated: 2022/07/22 11:22:33 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_stack *lst, t_stack *new)
{
	if (lst == NULL)
		lst = new;
	else
	{
		lst = ft_lstlast(lst);
		lst->next = new;
	}
}
