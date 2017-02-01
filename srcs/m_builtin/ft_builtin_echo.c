/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_builtin_echo.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 14:09:11 by alhelson          #+#    #+#             */
/*   Updated: 2017/01/06 15:23:25 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"

static void	ft_display_env(char *str)
{
	char	*tmp;

	if (ft_strlen(str) < 2)
		return ;
	tmp = ft_getenv(str + 1);
	if (tmp)
		tmp += ft_strlen(str);
	ft_putstr(tmp);
}

int			ft_builtin_echo(char **argv)
{
	int		c;
	int		argc;

	if (!argv || !(*argv))
		return (1);
	c = 0;
	argc = ft_str2dlen(argv);
	while (argv[c] && c < argc)
	{
		if (argv[c][0] != '$')
			ft_putstr(argv[c]);
		else
		{
			ft_display_env(argv[c]);
		}
		if (argv[c + 1])
			ft_putchar(' ');
		c++;
	}
	ft_putchar('\n');
	return (1);
}
