/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_lst_check_int_duplicate.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:19:45 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/17 15:04:36 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lm_lst.h>	// needed for t_lst, NULL

char	lm_lst_check_int_duplicate(t_lst **lst_to_check)
{
	t_lst	*lst_index;
	t_lst	*lst_index_compare;

	if (lst_to_check == NULL)
		return (0);
	lst_index = *lst_to_check;
	while (lst_index != NULL)
	{
		lst_index_compare = (*lst_index).next;
		while (lst_index_compare != NULL)
		{
			if ((*lst_index_compare).content == (*lst_index).content)
				return (1);
			lst_index_compare = (*lst_index_compare).next;
		}
		lst_index = (*lst_index).next;
	}
	return (0);
}
