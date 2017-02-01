/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_extract_after_sep.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 15:01:37 by alhelson          #+#    #+#             */
/*   Updated: 2017/01/04 15:01:53 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"
#include <stdlib.h>

char		*ft_str_extract_after_sep(char *str, char sep)
{
	char	*tmp;
	int		size;
	int		count;
	int		c1;

	if (!str)
		return (0);
	count = 0;
	while (str[count] && str[count] != sep)
		count++;
	count++;
	if (!str[count])
		return (0);
	size = ft_strlen(str) - count;
	if (!(tmp = malloc(sizeof(char) * (size + 1))))
		return (0);
	c1 = 0;
	while (str[count + c1])
	{
		tmp[c1] = str[count + c1];
		c1++;
	}
	tmp[c1] = 0;
	return (tmp);
}
