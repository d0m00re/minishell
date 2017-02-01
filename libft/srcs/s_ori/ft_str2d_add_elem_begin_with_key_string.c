/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str2d_add_elem_begin_with_key_string.c          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 15:48:29 by alhelson          #+#    #+#             */
/*   Updated: 2017/01/04 17:21:02 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"
#include <stdlib.h>

int			ft_str2d_add_elem_begin_with_key_string(char ***str,\
			char **key, char **value)
{
	int		id;
	char	*new_s;

	if (!str || !(*str) || !key || !value)
		return (0);
	id = ft_str2d_found_id_with_begin_str(*str, *key);
	new_s = ft_str_create_with_two_strings(*key, *value);
	if (!new_s)
		return (0);
	if (id < 0)
		ft_str2d_incr_size_add_str(str, new_s);
	else
	{
		free(str[0][id]);
		str[0][id] = new_s;
	}
	return (1);
}
