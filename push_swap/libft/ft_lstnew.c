/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 11:18:35 by pnolte            #+#    #+#             */
/*   Updated: 2022/07/28 11:29:35 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_stack	*ft_lstnew(int content)
{
	t_stack	*new;

	new = malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	new->nbr = content;
	new->index = -1;
	new->next = NULL;
	return (new);
}
