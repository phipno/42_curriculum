/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bi_export.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnolte <pnolte@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 19:02:07 by pnolte            #+#    #+#             */
/*   Updated: 2023/02/28 14:27:00 by pnolte           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../env/env.h"
#include "../error/error.h"
#include "../../lib/the_lib/lib.h"

#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

static void	puke_error(char *export_value)
{
	add_env(ft_strdup("?=1"));
	ft_putstr_fd("miesmushell: export: `", 2);
	ft_putstr_fd(export_value, 2);
	ft_putstr_fd("': not a valid identifier\n", 2);
}

static bool	variable_name_allowed(char *str, char *export_value)
{
	int		j;
	bool	misery;

	misery = false;
	if (str == NULL || ft_isdigit(str[0]) != 0)
		misery = true;
	j = 0;
	while (misery == false && str[j] != '\0')
	{
		misery = true;
		if (ft_isalnum(str[j]) == true || str[j] == '_')
			misery = false;
		j++;
	}
	if (misery == true)
		puke_error(export_value);
	else
		add_env(ft_strdup("?=0"));
	return (misery);
}

void	bi_export(char **smpl_cmd)
{
	char	**split;
	int		i;
	bool	misery;

	i = 1;
	split = NULL;
	while (smpl_cmd[i] != NULL)
	{
		if (ft_strchr(smpl_cmd[i], '=') != NULL)
		{
			split = ft_split(smpl_cmd[i], '=');
			misery = variable_name_allowed(split[0], smpl_cmd[i]);
		}
		else
			misery = variable_name_allowed(smpl_cmd[i], smpl_cmd[i]);
		if (misery == false)
			add_env(ft_strdup(smpl_cmd[i]));
		if (split != NULL)
			free_splits(split);
		i++;
	}
}
