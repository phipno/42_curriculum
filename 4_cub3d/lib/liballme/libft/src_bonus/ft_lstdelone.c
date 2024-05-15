/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:07:44 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/03 21:07:35 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>	// needed for t_list

void	ft_lstdelone(t_list *lst, void (*del) (void *))
{
	if (lst == NULL)
		return ;
	del((*lst).content);
	free(lst);
}
