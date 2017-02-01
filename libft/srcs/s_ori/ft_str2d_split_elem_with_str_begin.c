/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str2d_split_elem_with_str_begin.c               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 15:53:20 by alhelson          #+#    #+#             */
/*   Updated: 2017/01/04 17:21:45 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"

char		**ft_str2d_split_elem_with_str_begin(char **arge,\
			char *str, char sep)
{
	char	**str2d_env;
	char	*data;

	str2d_env = 0;
	if (!(data = ft_str2d_extract_elem_with_str_begin(arge, str)))
		return (0);
	if (!(str2d_env = ft_strsplit(data + ft_strlen(str), sep)))
		return (0);
	ft_strdel(&str);
	return (str2d_env);
}
