/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 11:41:12 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/03 21:15:27 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>	// needed for NULL

size_t	ft_strlen(const char *str_to_count)
{
	size_t	index;

	index = 0;
	if (str_to_count == NULL)
		return (0);
	while (str_to_count[index])
		index++;
	return (index);
}
