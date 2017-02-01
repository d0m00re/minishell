/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_replace_begin_str_by_another.c              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/17 23:26:44 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/18 14:14:02 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"
#include <stdlib.h>

/*
** replace begin str by another begin
*/

static void		ft_affect_data_bb(char **str, char *new, char *by, int *c)
{
	int			c2;

	c2 = 0;
	while (by[c2])
	{
		new[c2] = by[c2];
		c2++;
	}
	while (str[0][*c])
	{
		new[c2] = str[0][*c];
		c2++;
		(*c)++;
	}
	new[c2] = '\0';
}

int				ft_str_replace_begin_str_by_another(char **str,\
				char *by, char delim)
{
	int			c;
	char		*new;

	c = 0;
	if (!str || !(*str) || !(*by))
		return (0);
	while (str[0][c] != delim)
		c++;
	if (!(str[0][c]))
		return (0);
	c++;
	if (!(new = malloc(sizeof(char) * (ft_strlen(str[0]) + ft_strlen(by) + 1))))
		return (0);
	ft_affect_data_bb(str, new, by, &c);
	free(*str);
	*str = new;
	return (0);
}
