/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:04:42 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/03 21:10:16 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>	// needed for write()

void	ft_putchar_fd(char c_to_print, int fd)
{
	write(fd, &c_to_print, 1);
}
