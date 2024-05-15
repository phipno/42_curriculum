/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lm_int.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwillert <jwillert@student.42heilbronn.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:08:32 by jwillert          #+#    #+#             */
/*   Updated: 2023/05/24 10:37:10 by jwillert         ###   ########          */
/*                                                                            */
/* ************************************************************************** */

#ifndef LM_INT_H
# define LM_INT_H

/// @brief	Compares two values and decides which value has the bigger absolute
/// @param value_a
/// @param value_b
/// @return	-1 for value_a (left), 0 for none, 1 for value_b (right)
char	lm_int_compare_absolute_biggest(int value_a, int value_b);

/// @brief	Compares two values and decides which value has the smaller absolute
/// @param value_a
/// @param value_b
/// @return	-1 for value_a (left), 0 for none, 1 for value_b (right)
char	lm_int_compare_absolute_smallest(int value_a, int value_b);

#endif	// LM_INT_H
