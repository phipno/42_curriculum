/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:06:53 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/03 21:07:51 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>	// needed for t_list

int	ft_lstsize(t_list *lst)
{
	size_t	index;

	index = 0;
	if (lst == NULL)
		return (0);
	while (lst != NULL)
	{
		lst = (*lst).next;
		index++;
	}
	return (index);
}
