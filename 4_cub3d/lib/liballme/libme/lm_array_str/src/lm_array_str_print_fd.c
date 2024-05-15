/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_array_str_print_fd.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:49:49 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/17 14:28:16 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>	// needed for NULL, size_t, ft_putstr_fd(), ft_putchar_fd()

void	lm_array_print_fd(char **array_to_print, int fd_target)
{
	size_t	index;

	index = 0;
	while (array_to_print[index] != NULL)
	{
		ft_putstr_fd(array_to_print[index], fd_target);
		ft_putchar_fd('\n', fd_target);
		index += 1;
	}
}
