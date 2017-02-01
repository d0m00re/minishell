/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_builtin_unsetenv.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/30 20:45:26 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/30 20:45:28 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"

int	ft_builtin_unsetenv(char **to_delete)
{
	int size;

	size = ft_str2dlen(to_delete);
	if (size != 1)
	{
		ft_putstr_fd("Usage: unsetenv [name].\n", 2);
		return (0);
	}
	return (ft_unsetenv(*to_delete));
}
