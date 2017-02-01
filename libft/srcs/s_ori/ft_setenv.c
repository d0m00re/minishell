/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setenv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 16:02:03 by alhelson          #+#    #+#             */
/*   Updated: 2017/01/04 16:02:15 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"
#include <stdlib.h>

int				ft_setenv(const char *name, const char *value, int overwrite)
{
	extern char **environ;
	char		*str;
	char		*tmp;

	if (!name || !value)
		return (-1);
	str = ft_getenv(name);
	if (!overwrite && str)
		return (-1);
	if (!(tmp = ft_str_create_with_two_strings((char *)name, "=")))
		exit(1);
	ft_str_transform_in_maj(tmp);
	ft_str2d_add_elem_begin_with_key_string(&environ, &tmp, (char **)&value);
	ft_strdel(&tmp);
	return (0);
}
