/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorvai <amorvai@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 08:28:52 by amorvai           #+#    #+#             */
/*   Updated: 2023/02/28 18:51:20 by amorvai          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include "../token/token.h"
# include <stdio.h> // or stdlib.h?
# include <stdbool.h>

char	*append_str(char *command_str,
			const char *str, size_t start, size_t len);

char	*expand_env_var(char *command_str, const char *str, size_t *i,
			bool quoted);
char	*expand_sing_quote(char *command_str, const char *str, size_t *i);
char	*expand_doub_quote_simple(char *command_str,
			const char *str, size_t *i);
char	*expand_heredoc(const char *line);

#endif
