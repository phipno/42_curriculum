/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:08:49 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/03 21:07:46 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>	// needed for t_list

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_to_map;
	t_list	*lst_to_map_index;
	t_list	*lst_index;

	if (lst == NULL)
		return (NULL);
	lst_to_map = ft_lstnew(f((*lst).content));
	if (lst_to_map == NULL)
		return (NULL);
	lst_index = (*lst).next;
	lst_to_map_index = lst_to_map;
	while (lst_index != NULL)
	{
		ft_lstadd_back(&lst_to_map_index, ft_lstnew(f((*lst_index).content)));
		if (lst_to_map_index == NULL)
		{
			ft_lstclear(&lst_to_map, del);
			return (NULL);
		}
		lst_index = (*lst_index).next;
		lst_to_map_index = (*lst_to_map_index).next;
	}
	return (lst_to_map);
}
