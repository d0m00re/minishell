/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str2d_delete_elem_with_id.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 16:57:52 by alhelson          #+#    #+#             */
/*   Updated: 2017/01/04 17:06:30 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"
#include <stdlib.h>

int			ft_str2d_delete_elem_with_id(char ***str, int id)
{
	int		size;
	int		c;
	int		c2;
	char	**new_str;

	if (id < 0 || !str || !(*str) || !(**str) || ((size = ft_str2dlen(*str)) <\
	1 || size <= id) || (!(new_str = malloc(sizeof(char *) * size))))
		return (0);
	c = 0;
	c2 = 0;
	while (c2 < size - 1)
	{
		if (c2 != id)
		{
			new_str[c] = str[0][c2];
			c++;
		}
		else
			free(str[0][c2]);
		c2++;
	}
	new_str[c] = 0;
	free(*str);
	*str = new_str;
	return (1);
}
