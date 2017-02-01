/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_extract_after_n_char.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 16:36:13 by alhelson          #+#    #+#             */
/*   Updated: 2017/01/04 15:56:15 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"
#include <stdlib.h>

char		*ft_str_extract_after_n_char(char const *str, int nb)
{
	int		size;
	int		c;
	char	*new;

	c = 0;
	if (!str)
		return (0);
	size = ft_strlen(str) - nb;
	if (nb <= 0 || !(new = malloc(sizeof(char) * (size + 1))))
		return (0);
	while (str[c + nb])
	{
		new[c] = str[c + nb];
		c++;
	}
	new[c] = '\0';
	return (new);
}
