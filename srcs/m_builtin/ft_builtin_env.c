/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_builtin_env.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/02 14:01:14 by alhelson          #+#    #+#             */
/*   Updated: 2017/01/06 15:52:08 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"
#include "ft_launch.h"
#include <stdlib.h>
#include "ft_tool.h"
#include <unistd.h>

static int			ft_opts_ignore_env(char **line_command, int *id)
{
	if (!line_command || !(*line_command) || (*id) < 0)
		return (0);
	if ((ft_strcmp(line_command[*id], "-") != 0) &&\
	(ft_strcmp(line_command[*id], "-i") != 0))
		return (0);
	(*id)++;
	ft_env_reset();
	return (1);
}

static int			ft_opts_ignore_unset(char **line_command, int *id, int size)
{
	if (!line_command || !(*line_command) || size < (*id) + 1 || (*id) < 0)
		return (0);
	if ((ft_strcmp(line_command[*id], "-u") != 0) &&\
	(ft_strcmp(line_command[*id], "--unset") != 0))
		return (0);
	(*id)++;
	ft_unsetenv(line_command[*id]);
	(*id)++;
	return (1);
}

static int			ft_spe_setenv(char **line_command, int *id, int size)
{
	char			*str;
	char			*str2;
	extern char		**environ;

	if (size <= (*id) || !line_command || !(*line_command) || (*id) < 0\
	|| !(ft_strchr(line_command[(*id)], '=')))
		return (0);
	str = ft_str_extract_before_sep(line_command[*id], '=');
	str2 = ft_str_extract_after_sep(line_command[*id], '=');
	ft_setenv(str, str2, 1);
	ft_strdel(&str);
	ft_strdel(&str2);
	(*id)++;
	return (1);
}

static int			ft_op_son(int size, char **cmd)
{
	int				ret;
	int				id;

	ret = 1;
	id = 0;
	ft_init_sg();
	while (id < size && ret)
	{
		ret = ft_opts_ignore_env(cmd, &id);
		ret += ft_opts_ignore_unset(cmd, &id, size);
	}
	while (ft_spe_setenv(cmd, &id, size))
	{
	}
	if (size == id)
		ft_env_display();
	else
		ft_launch_main(&cmd[id]);
	exit(1);
}

int					ft_builtin_env(char **cmd)
{
	int				size;
	pid_t			father;

	size = ft_str2dlen(cmd);
	if (!size)
	{
		ft_env_display();
		return (0);
	}
	father = fork();
	if (father == -1)
		return (-1);
	else if (father > 0)
		father = wait(&father);
	else
		ft_op_son(size, cmd);
	return (1);
}
