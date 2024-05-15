/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_str_get_empty.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:49:29 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/03 17:45:26 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>	// needed for malloc(), NULL

char	*lm_str_get_empty(void)
{
	char	*str_return;

	str_return = malloc (sizeof (char) * 1);
	if (str_return == NULL)
		return (NULL);
	str_return[0] = '\0';
	return (str_return);
}
