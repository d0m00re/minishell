/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_extract_before_sep.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 15:44:02 by alhelson          #+#    #+#             */
/*   Updated: 2017/01/04 15:44:26 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"
#include <stdlib.h>

char		*ft_str_extract_before_sep(char *str, char sep)
{
	char	*tmp;
	int		size;
	int		count;

	if (!str)
		return (0);
	size = 0;
	while (str[size] && str[size] != sep)
		size++;
	if (!(tmp = malloc(sizeof(char) * (size + 1))))
		return (0);
	count = 0;
	while (count < size)
	{
		tmp[count] = str[count];
		count++;
	}
	tmp[count] = 0;
	return (tmp);
}
