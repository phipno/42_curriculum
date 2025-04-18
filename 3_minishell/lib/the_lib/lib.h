/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorvai <amorvai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 23:57:12 by amorvai           #+#    #+#             */
/*   Updated: 2023/02/25 11:41:44 by amorvai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H

# include "libft/libft.h"

int		ft_printf(const char *s, ...);
int		get_next_line(int fd, char **newline);

#endif
