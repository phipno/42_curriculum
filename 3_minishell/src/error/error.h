/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 15:55:16 by pnolte            #+#    #+#             */
/*   Updated: 2023/02/28 19:25:36 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERROR_H
# define ERROR_H

# include "../token/token.h"

void	print_syntax_error(const t_token *nearby_token);
void	print_error_open_quotes(void);

void	print_permission_denied(char *file, int ident);
int		print_is_directory(char *file);
int		print_command_not_found(char *file);
void	print_no_such(char *file, char *flex, int ident);

int		print_redirection_protection(void);
int		print_fork_protection(void);
int		print_open_protection(void);
void	print_export_unset(char *value, char *flex);

#endif
