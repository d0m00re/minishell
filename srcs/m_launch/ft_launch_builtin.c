/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_launch_builtin.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 14:53:54 by alhelson          #+#    #+#             */
/*   Updated: 2017/01/04 14:53:55 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"
#include "ft_builtin.h"

int	ft_launch_builtin(int num, char **cmd)
{
	if (num == ENV)
		ft_builtin_env(cmd);
	else if (num == ECHO)
		ft_builtin_echo(cmd);
	else if (num == CD)
		ft_builtin_cd(cmd);
	else if (num == SETENV)
		ft_builtin_setenv(cmd);
	else if (num == UNSETENV)
		ft_builtin_unsetenv(cmd);
	else if (num == EXIT)
		ft_builtin_exit();
	return (1);
}
