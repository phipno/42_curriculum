/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_lst_header_print_fd.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 16:54:31 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/17 15:06:17 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>	// needed for ft_putstr_fd(), ft_putchar()
#include <lm_lst.h>	// needed for t_lst_header, lm_lst_print()

void	lm_lst_header_print_fd(t_lst_header *lst_to_print, int fd_target)
{
	ft_putstr_fd("List name: ", fd_target);
	ft_putstr_fd(lst_to_print->title, fd_target);
	ft_putchar_fd('\n', fd_target);
	lm_lst_print_fd(lst_to_print->head, fd_target);
}
