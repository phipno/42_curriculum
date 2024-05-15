/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_lst_header_free.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:17:32 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/17 15:06:06 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lm_lst.h>	// needed for t_lst_header, lm_lst_free(), free()

void	lm_lst_header_free(t_lst_header *lst_to_free)
{
	lm_lst_free(lst_to_free->head);
	free(lst_to_free);
}
