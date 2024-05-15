/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_lst_find_int_next_biggest.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 12:56:28 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/17 15:05:22 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lm_lst.h>	// needed for NULL, t_lst

int	lm_lst_find_int_next_biggest(t_lst *lst_to_search, int int_to_compare)
{
	int	int_next_biggest;
	int	tmp;

	if (lst_to_search == NULL || lst_to_search->next == NULL)
		return (0);
	int_next_biggest = 0;
	tmp = lst_to_search->content;
	while (lst_to_search != NULL)
	{
		if (lst_to_search->content > int_to_compare)
		{
			int_next_biggest = lst_to_search->content;
			if (int_next_biggest < tmp)
				tmp = int_next_biggest;
		}
		lst_to_search = lst_to_search->next;
	}
	if (tmp != int_to_compare && tmp > int_to_compare)
		return (tmp);
	else if (int_next_biggest > int_to_compare)
		return (int_next_biggest);
	else
		return (int_to_compare);
}
