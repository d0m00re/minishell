/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clear_buffer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 20:07:22 by alhelson          #+#    #+#             */
/*   Updated: 2017/01/06 20:07:35 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"
#include <unistd.h>

int			ft_clear_buffer(void)
{
	char	c;
	int		count;

	count = 0;
	while (read(0, &c, 1) && c > 0 && c != 10 && count < 2000000000)
		count++;
	return (count);
}
