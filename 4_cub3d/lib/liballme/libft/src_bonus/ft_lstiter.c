/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:08:28 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/03 21:07:39 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>	// needed for t_list

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*lst_index;

	lst_index = lst;
	while (lst_index != NULL)
	{
		f((*lst_index).content);
		lst_index = (*lst_index).next;
	}
}
