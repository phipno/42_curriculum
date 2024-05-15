/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_lst_calculate_sum.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 23:37:16 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/17 15:04:23 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lm_lst.h>	// needed for NULL

long	lm_lst_calculate_sum(t_lst *lst_to_calculate)
{
	long	sum;

	sum = 0;
	if (lst_to_calculate == NULL)
		return (0);
	while (lst_to_calculate != NULL)
	{
		sum = sum + lst_to_calculate->content;
		lst_to_calculate = lst_to_calculate->next;
	}
	return (sum);
}
