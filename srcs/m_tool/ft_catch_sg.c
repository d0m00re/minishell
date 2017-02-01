/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_catch_sg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 14:06:55 by alhelson          #+#    #+#             */
/*   Updated: 2017/01/04 14:07:06 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <stdlib.h>
#include "ft_ori.h"

void	ft_catch_sg(int v)
{
	if (SIGQUIT == v)
		exit(0);
	if (SIGINT == v)
		ft_putstr("\n$>");
	if (11 == v)
		ft_putstr_fd("You really have a life of shit ...\n", 2);
}
