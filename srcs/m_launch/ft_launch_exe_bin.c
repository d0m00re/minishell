/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_launch_exe_bin.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 14:54:05 by alhelson          #+#    #+#             */
/*   Updated: 2017/01/09 15:51:42 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include "ft_ori.h"
#include "ft_launch.h"

static void			ft_spe_display(char *str, char *str2)
{
	ft_putstr_fd(str, 2);
	ft_putstr_fd(str2, 2);
	ft_putstr_fd("\n", 2);
}

static void			ft_action_if_executable(char **line_command)
{
	char			*path_command;
	extern char		**environ;

	path_command = 0;
	if (!access(*line_command, F_OK) && access(*line_command, X_OK))
		ft_spe_display("OMG: Permission denied :", *line_command);
	else if (access(*line_command, F_OK) && access(*line_command, X_OK))
		ft_spe_display("OMG: command not found :", *line_command);
	else
	{
		path_command = ft_strdup(*line_command);
		ft_str_delete_before_include_end_sep(*line_command, '/');
		execve(path_command, line_command, environ);
		ft_strdel(&path_command);
	}
}

static int			ft_exit(char **line_command)
{
	ft_spe_display("OMG: command not found :", *line_command);
	exit(0);
}

int					ft_launch_exe_bin(char **line_command, int *error)
{
	extern char		**environ;
	pid_t			father;
	char			*path_command;

	path_command = 0;
	*error = 1;
	father = fork();
	if (father == -1)
		return (-1);
	else if (father > 0)
		father = wait(&father);
	else
	{
		if (ft_char_is_present(*line_command, '/'))
			ft_action_if_executable(line_command);
		else if ((path_command = ft_found_path_for_bin(*line_command, error)))
			execve(path_command, line_command, environ);
		else
			ft_exit(line_command);
		ft_strdel(&path_command);
		exit(1);
	}
	return (1);
}
