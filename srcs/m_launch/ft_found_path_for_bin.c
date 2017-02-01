/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_found_path_for_bin.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 14:53:47 by alhelson          #+#    #+#             */
/*   Updated: 2017/01/04 14:57:16 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"
#include <unistd.h>
#include <errno.h>

char		*ft_found_path_for_bin(char *name, int *spe_error)
{
	int		c;
	char	*tmp;
	char	**dup;

	if (!name || !(tmp = ft_getenv("PATH")))
		return (0);
	if (!(dup = ft_strsplit(tmp + 5, ':')))
		return (0);
	c = 0;
	while (dup[c] && *spe_error != -1)
	{
		ft_str_resize_concat_two_params(&dup[c], "/", name);
		if (!access(dup[c], X_OK))
		{
			tmp = ft_strdup(dup[c]);
			ft_str2d_del(&dup);
			return (tmp);
		}
		else if (!access(dup[c], F_OK))
			*spe_error = -1;
		c++;
	}
	ft_str2d_del(&dup);
	return (0);
}
