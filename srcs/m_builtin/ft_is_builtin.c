/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_builtin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/30 12:17:43 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/30 12:17:44 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"
#include "ft_builtin.h"

/*
** -1 error : not a builtin
*/

int	ft_is_builtin(char *str)
{
	if (!str)
		return (-1);
	if (!(ft_strcmp(str, "echo")))
		return (ECHO);
	else if (!(ft_strcmp(str, "cd")))
		return (CD);
	else if (!(ft_strcmp(str, "setenv")))
		return (SETENV);
	else if (!(ft_strcmp(str, "unsetenv")))
		return (UNSETENV);
	else if (!(ft_strcmp(str, "env")))
		return (ENV);
	else if (!(ft_strcmp(str, "exit")))
		return (EXIT);
	return (-1);
}
