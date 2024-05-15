/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_lst_count_streak_ascending.c                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 15:06:06 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/17 15:04:51 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lm_lst.h>	// needed for t_lst, NULL

size_t	lm_lst_count_streak_ascending(t_lst *lst_to_count)
{
	size_t	index;

	if (lst_to_count == NULL)
		return (0);
	index = 1;
	while (lst_to_count != NULL)
	{
		if (lst_to_count->next != NULL)
		{
			if (lst_to_count->content > lst_to_count->next->content)
				break ;
		}
		else if (lst_to_count->next == NULL)
			return (index);
		index++;
		lst_to_count = lst_to_count->next;
	}
	return (index);
}
