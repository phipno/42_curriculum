/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:08:11 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/03 21:07:32 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>	// needed for t_list

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*lst_temp;

	while (lst != NULL && *lst != NULL)
	{
		lst_temp = (**lst).next;
		ft_lstdelone(*lst, del);
		*lst = lst_temp;
	}
}
