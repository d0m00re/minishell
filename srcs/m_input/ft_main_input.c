/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 14:53:14 by alhelson          #+#    #+#             */
/*   Updated: 2017/01/04 14:53:22 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"
#include <stdlib.h>
#include <unistd.h>

char	*ft_main_input(void)
{
	char *line;

	line = 0;
	write(1, "$>", 2);
	if (!(line = ft_read_standart_input()))
		ft_putstr_fd("OMG : error line_command\n", 2);
	return (line);
}
