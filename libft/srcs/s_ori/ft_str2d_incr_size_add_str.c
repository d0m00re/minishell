/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str2d_incr_size_add_str.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 16:01:28 by alhelson          #+#    #+#             */
/*   Updated: 2017/01/04 16:01:44 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_ori.h"

int			ft_str2d_incr_size_add_str(char ***tab, char *str)
{
	char	**tab2;
	char	**new_t;
	int		c;
	int		size;

	c = 0;
	tab2 = *tab;
	while (*tab2)
		tab2++;
	size = tab2 - *tab;
	if (!(new_t = malloc(sizeof(char *) * (size + 2))))
		return (0);
	while (c < size)
	{
		new_t[c] = tab[0][c];
		c++;
	}
	new_t[c] = str;
	c++;
	new_t[c] = 0;
	free(*tab);
	*tab = new_t;
	return (1);
}
