/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_builtin_setenv.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 14:09:04 by alhelson          #+#    #+#             */
/*   Updated: 2017/01/08 15:45:54 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"
#include <stdlib.h>

int			ft_builtin_setenv(char **line_command)
{
	int		size;
	char	*name;
	char	*value;
	int		ret;

	size = ft_str2dlen(line_command);
	ret = 0;
	if (size != 2)
	{
		if (size == 1 && ft_char_is_present(*line_command, '='))
		{
			name = ft_str_extract_before_sep(*line_command, '=');
			value = ft_str_extract_after_sep(*line_command, '=');
			ret = ft_setenv(name, value, 1);
			ft_strdel(&name);
			ft_strdel(&value);
		}
		else
			ft_putstr_fd("Usage: setenv [name[=]value].\n", 2);
		return (ret);
	}
	return (ft_setenv(line_command[0], line_command[1], 1));
}
