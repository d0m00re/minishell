/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_transform_in_maj.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 16:07:19 by alhelson          #+#    #+#             */
/*   Updated: 2017/01/06 16:07:21 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"

void	ft_str_transform_in_maj(char *str)
{
	int count;

	count = 0;
	if (!str)
		return ;
	while (str[count])
	{
		str[count] = ft_toupper(str[count]);
		count++;
	}
}
