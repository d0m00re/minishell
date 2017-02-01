/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_transform_in_min.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 16:07:12 by alhelson          #+#    #+#             */
/*   Updated: 2017/01/06 16:07:13 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"

void	ft_str_transform_in_min(char *str)
{
	int count;

	count = 0;
	if (!str)
		return ;
	while (str[count])
	{
		str[count] = ft_tolower(str[count]);
		count++;
	}
}
