/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_utils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:16:22 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/24 10:38:15 by jwillert         ###   ########          */
/*                                                                            */
/* ************************************************************************** */

#ifndef LM_UTILS_H
# define LM_UTILS_H

/// @brief	Silences the (linux C) compiler warning that a parameter is not used
/// @param dummy
void	lm_utils_dummy(void *dummy);

/// @brief 	Prints the error_message to stderror and exits with exit_status
/// @param error_message
/// @param exit_status
void	lm_utils_exit_with_error(char *error_message, int exit_status);

#endif	// LM_UTILS_H
