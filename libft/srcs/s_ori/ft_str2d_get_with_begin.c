/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str2d_get_with_begin.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/17 23:08:43 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/17 23:08:45 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"

char	*ft_str2d_get_with_begin(char **str, char *found)
{
	int ret;

	ret = ft_str2d_found_id_with_begin_str(str, found);
	if (ret > 0)
		return (str[ret]);
	return (0);
}
