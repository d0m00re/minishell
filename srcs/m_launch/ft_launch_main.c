/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_launch_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 14:54:12 by alhelson          #+#    #+#             */
/*   Updated: 2017/01/04 14:54:13 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_launch.h"
#include "ft_ori.h"
#include "ft_builtin.h"

int	ft_launch_main(char **line_command)
{
	int num;
	int ret;
	int ret_error;

	ret_error = 0;
	if (!line_command || !(*line_command))
		return (-1);
	num = ft_is_builtin(*line_command);
	if (num >= 0)
		return (ft_launch_builtin(num, &line_command[1]));
	else
		ret = (ft_launch_exe_bin(line_command, &ret_error));
	if (!ret)
	{
		if (ret_error == -1)
			ft_putstr_fd("OMG: Permission denied :", 2);
		else
			ft_putstr_fd("OMG: command not found :", 2);
		ft_putendl(*line_command);
	}
	return (ret);
}
