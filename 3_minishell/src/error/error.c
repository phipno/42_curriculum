/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 15:55:22 by pnolte            #+#    #+#             */
/*   Updated: 2023/02/28 19:25:13 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../lib/the_lib/lib.h"
#include "../env/env.h"

#include <unistd.h>

void	print_command_not_found(char *file)
{
	add_env(ft_xstrdup("?=127"));
	ft_putstr_fd("miesmushell: ", 2);
	ft_putstr_fd(file, 2);
	ft_putstr_fd(": command not found\n", 2);
}

void	print_permission_denied(char *file, int ident)
{
	if (ident == 'c')
		add_env(ft_xstrdup("?=126"));
	if (ident == 'r')
		add_env(ft_xstrdup("?=1"));
	ft_putstr_fd("miesmushell: ", 2);
	ft_putstr_fd(file, 2);
	ft_putstr_fd(": Permission denied\n", 2);
}

void	print_no_such(char *file, char *flex, int ident)
{
	if (ident == 'c')
		add_env(ft_xstrdup("?=127"));
	if (ident == 'r')
		add_env(ft_xstrdup("?=1"));
	ft_putstr_fd("miesmushell: ", 2);
	ft_putstr_fd(file, 2);
	ft_putstr_fd(": No such", 2);
	if (ft_strcmp("file", flex) == 0)
		ft_putstr_fd(" file\n", 2);
	else if (ft_strcmp("directory", flex) == 0)
		ft_putstr_fd(" directory\n", 2);
	else if (ft_strcmp("file_or_dire", flex) == 0)
		ft_putstr_fd(" file or directory\n", 2);
}

void	print_is_directory(char *file)
{
	add_env(ft_xstrdup("?=126"));
	ft_putstr_fd("miesmushell: ", 2);
	ft_putstr_fd(file, 2);
	ft_putstr_fd(": Is a directory\n", 2);
}
