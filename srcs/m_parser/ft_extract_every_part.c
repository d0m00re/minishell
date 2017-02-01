/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extract_every_part.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 15:56:59 by alhelson          #+#    #+#             */
/*   Updated: 2017/01/06 15:57:23 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"
#include <stdlib.h>

static void	ft_delete_useless_string(char ***cmd, int *begin)
{
	int		c;

	if (!cmd || !(*cmd) || !(**cmd))
		return ;
	c = 0;
	while (cmd[0][c])
	{
		if (ft_strcmp(cmd[0][c], ";") == 0)
		{
			(*begin)++;
			free(cmd[0][c]);
			cmd[0][c] = 0;
			return ;
		}
		c++;
	}
}

char		**ft_extract_every_part(char **cmd, int *begin)
{
	int		size;
	char	**tab;
	int		end;

	end = *begin;
	size = ft_str2dlen(cmd);
	if (end >= size)
		return (0);
	while (cmd[end] && cmd[end][0] != ';')
		end++;
	if (cmd[end])
		tab = ft_str2d_extract_substring(cmd, *begin, end);
	else
		tab = ft_str2d_extract_substring(cmd, *begin, end - 1);
	*begin = end;
	ft_delete_useless_string(&tab, begin);
	return (tab);
}
