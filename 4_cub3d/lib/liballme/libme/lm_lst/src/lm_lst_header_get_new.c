/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_lst_header_get_new.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:16:07 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/22 09:58:35 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lm_lst.h>	// needed for NULL, t_lst_header

t_lst_header	*lm_lst_header_get_new(char *str_title)
{
	t_lst_header	*lst_return;

	if (str_title == NULL)
	{
		return (NULL);
	}
	lst_return = (t_lst_header *) malloc (sizeof (t_lst_header));
	(*lst_return).title = str_title;
	(*lst_return).head = NULL;
	return (lst_return);
}
