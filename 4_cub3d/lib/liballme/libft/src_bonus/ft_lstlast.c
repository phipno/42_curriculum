/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:07:09 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/03 21:07:42 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>	// needed for t_list

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*lst_index;

	if (lst == NULL)
		return (NULL);
	lst_index = lst;
	while ((*lst_index).next != NULL)
		lst_index = (*lst_index).next;
	return (lst_index);
}
