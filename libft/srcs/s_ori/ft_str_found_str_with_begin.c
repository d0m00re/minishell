/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_found_str_with_begin.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/17 22:02:08 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/17 22:02:10 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"

int	ft_str_found_str_with_begin(char *str, char *to_found)
{
	if (!str || !to_found)
		return (0);
	if (ft_strncmp(str, to_found, ft_strlen(to_found)))
		return (0);
	return (1);
}
