/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_utils_dummy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 14:48:05 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/06 17:04:36 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>	// needed for NULL

void	lm_utils_dummy(void *dummy)
{
	if (dummy == NULL)
	{
		return ;
	}
	dummy++;
	dummy--;
}
