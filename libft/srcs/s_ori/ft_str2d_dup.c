/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str2d_dup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 15:54:22 by alhelson          #+#    #+#             */
/*   Updated: 2017/01/04 15:54:41 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"
#include <stdlib.h>

char		**ft_str2d_dup(char **tab)
{
	char	**new_t;
	int		size;
	int		c;

	size = ft_str2dlen(tab);
	c = 0;
	if (!(new_t = malloc(sizeof(char *) * (size + 1))))
		return (0);
	while (c < size)
	{
		if (!(new_t[c] = ft_strdup(tab[c])))
			return (0);
		c++;
	}
	new_t[c] = 0;
	return (new_t);
}
