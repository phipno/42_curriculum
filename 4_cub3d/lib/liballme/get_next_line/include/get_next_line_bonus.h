/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 17:53:06 by jwillert          #+#    #+#             */
/*   Updated: 2023/03/01 12:44:47 by jwillert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

/// @brief		Reads "BUFFER_SIZE" (MACRO) bytes of a file (fd) and returns
///				a string (with malloc) containing everything until the
///				first/next 'new line' character
/// @param fd
/// @return 	Current line or NULL if End of File / Error occured
char	*get_next_line(int fd);

#endif	//	GET_NEXT_LINE_BONUS