/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 17:43:44 by alhelson          #+#    #+#             */
/*   Updated: 2017/01/06 16:13:57 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"
#include "ft_input.h"
#include "ft_parser.h"
#include "ft_launch.h"
#include "ft_tool.h"
#include <unistd.h>

int				main(int argc, char **argv, char **env)
{
	extern char **environ;
	char		*line;
	char		**cmd;

	if (!isatty(0))
		return (-1);
	ft_init_sg();
	environ = ft_str2d_dup(environ);
	while (1)
	{
		if (!(line = ft_main_input()))
			continue;
		cmd = ft_parser(line);
		ft_launch_step(cmd);
		ft_strdel(&line);
		ft_str2d_del(&cmd);
	}
	return (1);
}
