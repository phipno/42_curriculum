/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 15:25:30 by jwillert          #+#    #+#             */
/*   Updated: 2023/01/21 18:06:09 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c_to_check)
{
	if ((c_to_check > 64 && c_to_check < 91)
		|| (c_to_check > 96 && c_to_check < 123)
		|| (c_to_check >= '0' && c_to_check <= '9'))
		return (1);
	return (0);
}
