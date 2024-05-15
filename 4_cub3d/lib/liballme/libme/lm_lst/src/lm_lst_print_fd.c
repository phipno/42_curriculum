/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_lst_print_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 16:55:40 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/17 15:06:30 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lm_lst.h>	// needed for NULL, t_lst, lm_lst_print_node()

void	lm_lst_print_fd(t_lst *lst_to_print, int fd_target)
{
	while (lst_to_print != NULL)
	{
		lm_lst_print_node_fd(lst_to_print, fd_target);
		lst_to_print = lst_to_print->next;
	}
}
