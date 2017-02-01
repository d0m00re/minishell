/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str2d_extract_substring.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 15:55:25 by alhelson          #+#    #+#             */
/*   Updated: 2017/01/04 15:55:36 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"
#include <stdlib.h>

char		**ft_str2d_extract_substring(char **str, int begin, int end)
{
	char	**tab;
	int		size;
	int		c;

	if (!(size = ft_str2dlen(str)) || begin < 0 || begin > end || size < end)
		return (0);
	if (!(tab = malloc(sizeof(char *) * (size + 1))))
		return (0);
	c = 0;
	while (begin + c <= end)
	{
		if (!(tab[c] = ft_strdup(str[c + begin])))
			return (0);
		c++;
	}
	tab[c] = 0;
	return (tab);
}
