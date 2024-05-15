/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_lst_find_int_biggest.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 15:30:25 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/17 15:05:16 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lm_lst.h>	// needed for t_lst, NULL

int	lm_lst_find_int_biggest(t_lst *lst_to_search)
{
	int	int_max;

	int_max = lst_to_search->content;
	while (lst_to_search != NULL)
	{
		if (int_max < lst_to_search->content)
			int_max = lst_to_search->content;
		lst_to_search = lst_to_search->next;
	}
	return (int_max);
}
