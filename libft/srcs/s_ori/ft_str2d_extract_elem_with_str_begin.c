/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str2d_extract_elem_with_str_begin.c             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 15:53:40 by alhelson          #+#    #+#             */
/*   Updated: 2017/01/04 15:53:52 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"

char		*ft_str2d_extract_elem_with_str_begin(char **arge, char *str)
{
	char	*tmp;
	char	*new;
	int		id;

	if (!arge || !(*arge) || !str\
	|| (id = ft_str2d_found_id_with_begin_str(arge, str)) == -1)
		return (0);
	if (!(tmp = ft_strstr(arge[id], str)))
		return (0);
	if (!(new = ft_strdup(tmp)))
		return (0);
	return (new);
}
