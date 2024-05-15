/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_lst_count_iterations.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:48:15 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/22 09:42:36 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lm_lst.h>	// needed for t_lst, NULL

size_t	lm_lst_count_iterations(t_lst *lst_start, t_lst *lst_end)
{
	size_t	index;
	t_lst	*lst_index;

	index = 0;
	if (lst_start == NULL || lst_end == NULL)
		return (0);
	lst_index = lst_start;
	while (lst_index != lst_end && lst_index != NULL)
	{
		index++;
		lst_index = lst_index->next;
	}
	if (lst_index == NULL && lst_index != lst_end)
	{
		return (0);
	}
	return (index);
}
