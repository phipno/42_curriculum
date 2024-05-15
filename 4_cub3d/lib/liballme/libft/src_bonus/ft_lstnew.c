/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:06:10 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/03 21:07:48 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>	// needed for t_list

t_list	*ft_lstnew(void *content)
{
	t_list	*lst_head;

	lst_head = (t_list *)malloc(sizeof (t_list));
	if (lst_head == NULL)
		return (NULL);
	(*lst_head).content = (void *)content;
	(*lst_head).next = NULL;
	return (lst_head);
}
