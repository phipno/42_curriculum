/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_vec_str_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:23:54 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/17 16:46:23 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <lm_vec_str.h>	// needed for t_vec_str, free()

void	lm_vec_str_free(t_vec_str *vec_to_free)
{
	free(vec_to_free->str);
	free(vec_to_free);
}
