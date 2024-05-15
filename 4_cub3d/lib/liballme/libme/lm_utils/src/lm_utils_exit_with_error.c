/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_utils_exit_with_error.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 11:58:17 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/17 16:42:19 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>	// needed for ft_strlen()
#include <unistd.h>	// needed for write()

void	lm_utils_exit_with_error(char *error_message, int exit_status)
{
	if (write(2, error_message, ft_strlen(error_message)) == -1)
	{
		exit(-1);
	}
	exit(exit_status);
}
