/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_lst_print_node_fd.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 16:54:44 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/17 15:06:36 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>	// needed for ft_putstr_fd(), ft_putchar_fd(), NULL
#include <lm_lst.h>	// needed for t_lst

void	lm_lst_print_node_fd(t_lst *node_to_print, int fd_target)
{
	if (node_to_print == NULL)
	{
		ft_putstr_fd("null\n", fd_target);
		return ;
	}
	ft_putstr_fd("Node: ", fd_target);
	ft_putnbr_fd(node_to_print->content, fd_target);
	ft_putchar_fd('\n', fd_target);
}
