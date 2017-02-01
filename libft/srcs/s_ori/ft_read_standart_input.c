/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_standart_input.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 20:07:16 by alhelson          #+#    #+#             */
/*   Updated: 2017/01/06 20:08:46 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"
#include <stdlib.h>
#include <unistd.h>

char		*ft_read_standart_input(void)
{
	char	*tab;
	int		c;
	char	ca;

	c = 0;
	if (!(tab = malloc(sizeof(char) * (MAX_SIZE + 1))))
		return (0);
	ft_memset(tab, 0, MAX_SIZE + 1);
	while (read(0, &ca, 1) && c < MAX_SIZE && ca != 10 && ca != -1)
	{
		tab[c] = ca;
		c++;
	}
	if (ca != 10 && ft_clear_buffer() > 1)
	{
		free(tab);
		tab = 0;
	}
	return (tab);
}
