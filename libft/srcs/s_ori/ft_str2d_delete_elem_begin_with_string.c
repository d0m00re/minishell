/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str2d_delete_elem_begin_with_string.c           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 17:51:31 by alhelson          #+#    #+#             */
/*   Updated: 2017/01/18 17:51:33 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"

int		ft_str2d_delete_elem_begin_with_string(char ***str,\
		char *to_found)
{
	int	id;

	id = ft_str2d_found_id_with_begin_str(*str, to_found);
	return (ft_str2d_delete_elem_with_id(str, id));
}
