/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_lst_count_nodes.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:09:50 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/17 16:29:49 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lm_lst.h>	// needed for t_lst, NULL

size_t	lm_lst_count_nodes(t_lst *lst_to_count)
{
	size_t	index;
	t_lst	*lst_index;

	index = 0;
	if (lst_to_count == NULL)
		return (0);
	lst_index = lst_to_count;
	while (lst_index != NULL)
	{
		lst_index = (*lst_index).next;
		index++;
	}
	return (index);
}
