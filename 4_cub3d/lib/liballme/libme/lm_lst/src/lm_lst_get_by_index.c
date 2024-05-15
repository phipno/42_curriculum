/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_lst_get_by_index.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:11:11 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/17 15:05:47 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lm_lst.h>	// needed for NULL, t_lst, size_t

t_lst	*lm_lst_get_by_index(t_lst *lst_to_iterate, size_t index)
{
	t_lst	*lst_index;

	if (lst_to_iterate == NULL)
	{
		return (NULL);
	}
	lst_index = lst_to_iterate;
	while (index != 0 && lst_index->next != NULL)
	{
		lst_index = (*lst_index).next;
		index -= 1;
	}
	return (lst_index);
}
