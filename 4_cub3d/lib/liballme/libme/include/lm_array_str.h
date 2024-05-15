/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_array_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:46:02 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/24 10:35:54 by jwillert         ###   ########          */
/*                                                                            */
/* ************************************************************************** */

#ifndef LM_ARRAY_STR_H
# define LM_ARRAY_STR_H
# include <stdlib.h>	// needed for size_t

/// @brief	Counts all characters of all strings in an char **array
/// @param array_to_count
/// @return Size_t of all characters
size_t	lm_array_str_count_length(char **array_to_count);

/// @brief	Counts all strings in an char **array
/// @param array_to_count
/// @return Size_t of all strings
size_t	lm_array_str_count_arguments(char **array_to_count);

/// @brief	Prints all strings of an char **array to a fd
/// @param array_to_print
/// @param fd_target
void	lm_array_print_fd(char **array_to_print, int fd_target);

/// @brief	Frees all strings of an char **array and the array itself
/// @param array_to_free
void	lm_array_str_free(char **array_to_free);

#endif	// LM_ARRAY_STR_H
