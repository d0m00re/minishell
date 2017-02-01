/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/31 12:49:49 by alhelson          #+#    #+#             */
/*   Updated: 2017/01/06 16:08:02 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"

char			*ft_getenv(const char *name)
{
	extern char **environ;
	int			c;
	char		*tmp;

	if (!environ || !(*environ) || !name)
		return (0);
	tmp = ft_strdup(name);
	ft_str_resize_concat(&tmp, "=");
	ft_str_transform_in_maj(tmp);
	c = 0;
	while (environ[c])
	{
		if (ft_str_found_str_with_begin(environ[c], (char *)tmp))
		{
			ft_strdel(&tmp);
			return (environ[c]);
		}
		c++;
	}
	ft_strdel(&tmp);
	return (0);
}
