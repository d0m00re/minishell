/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsetenv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 14:58:21 by alhelson          #+#    #+#             */
/*   Updated: 2017/01/08 18:09:19 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"
#include <stdlib.h>

static void		ft_spe_free(int *del, int id)
{
	extern char **environ;

	if (*del)
	{
		free(environ[id]);
		*del = 0;
	}
}

int				ft_unsetenv(const char *name)
{
	extern char	**environ;
	int			id;
	int			del;
	char		*tmp;

	if (!name || !(tmp = ft_strdup(name)))
		return (-1);
	ft_str_resize_concat(&tmp, "=");
	ft_str_transform_in_maj(tmp);
	if ((id = ft_str2d_found_id_with_begin_str(environ, tmp)) < 0)
	{
		ft_strdel(&tmp);
		return (-1);
	}
	del = 1;
	while (environ[id])
	{
		ft_spe_free(&del, id);
		environ[id] = environ[id + 1];
		id++;
	}
	ft_strdel(&tmp);
	return (0);
}
