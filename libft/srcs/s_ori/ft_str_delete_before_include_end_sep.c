/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_delete_before_include_end_sep.c             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/07 14:23:15 by alhelson          #+#    #+#             */
/*   Updated: 2017/01/07 14:23:17 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"

void	ft_str_delete_before_include_end_sep(char *str, char sep)
{
	int size;
	int count;
	int last_sep;

	if (((last_sep = ft_str_found_id_last_sep(str, sep)) == -1))
		return ;
	size = ft_strlen(str);
	count = 0;
	last_sep++;
	while (count < size)
	{
		if (last_sep < size)
			str[count] = str[last_sep];
		else
			str[count] = 0;
		count++;
		last_sep++;
	}
}
