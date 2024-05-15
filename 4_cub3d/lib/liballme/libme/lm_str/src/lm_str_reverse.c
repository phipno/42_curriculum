/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_str_reverse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 14:45:45 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/17 16:33:12 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>	// needed for ft_strlen(), NULL

void	lm_str_reverse(char *str_to_reverse)
{
	char	c_to_save;
	int		length;
	int		index;

	index = 0;
	if (str_to_reverse == NULL)
	{
		return ;
	}
	length = ft_strlen(str_to_reverse);
	while (index < length / 2)
	{
		c_to_save = str_to_reverse[index];
		str_to_reverse[index] = str_to_reverse[length - 1 - index];
		str_to_reverse[length - 1 - index] = c_to_save;
		index += 1;
	}
}
