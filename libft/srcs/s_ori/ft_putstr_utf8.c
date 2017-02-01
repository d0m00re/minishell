/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_utf8.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 15:57:23 by alhelson          #+#    #+#             */
/*   Updated: 2017/01/04 15:57:42 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"
#include <unistd.h>

void	ft_putstr_utf8(int const *tab)
{
	if (!tab)
	{
		write(1, "(null)", 6);
		return ;
	}
	while (*tab)
	{
		ft_putchar_utf8(*tab);
		tab++;
	}
}
