/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str2d_found_id_with_begin_str.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 15:53:01 by alhelson          #+#    #+#             */
/*   Updated: 2017/01/04 15:53:08 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"

int		ft_str2d_found_id_with_begin_str(char **argv, char *to_found)
{
	int count;

	if (!argv || !(*argv) || !to_found)
		return (-1);
	count = 0;
	while (argv[count])
	{
		if (ft_str_found_str_with_begin(argv[count], to_found))
			return (count);
		count++;
	}
	return (-1);
}
