/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_lst_get_duplicate.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 19:08:22 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/17 15:05:54 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lm_lst.h>	// needed for t_lst, NULL, lm_lst_add_back()
						// lm_lst_get_new()

t_lst	*lm_lst_get_duplicate(t_lst *lst_to_duplicate)
{
	t_lst	*lst_return;

	if (lst_to_duplicate == NULL)
		return (NULL);
	lst_return = lm_lst_get_new(lst_to_duplicate->content);
	if (lst_return == NULL)
		return (NULL);
	lst_to_duplicate = lst_to_duplicate->next;
	while (lst_to_duplicate != NULL)
	{
		lm_lst_add_back(lst_return,
			lm_lst_get_new(lst_to_duplicate->content));
		lst_to_duplicate = lst_to_duplicate->next;
	}
	return (lst_return);
}
