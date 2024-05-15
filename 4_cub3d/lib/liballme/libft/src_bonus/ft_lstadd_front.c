/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:06:35 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/03 21:07:29 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>	// needed for t_list

void	ft_lstadd_front(t_list **lst, t_list *node_to_add)
{
	(*node_to_add).next = *lst;
	*lst = node_to_add;
}
