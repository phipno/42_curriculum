/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_lst_get_last.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:11:57 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/17 15:05:58 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lm_lst.h>	// needed for t_lst, NULL

t_lst	*lm_lst_get_last(t_lst *lst_to_iterate)
{
	t_lst	*lst_index;

	if (lst_to_iterate == NULL)
		return (NULL);
	lst_index = lst_to_iterate;
	while ((*lst_index).next != NULL)
		lst_index = (*lst_index).next;
	return (lst_index);
}
