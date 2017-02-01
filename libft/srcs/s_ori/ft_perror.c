/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perror.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/18 17:51:54 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/18 17:51:55 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"
#include <errno.h>

void	ft_perror(char *str)
{
	if (!errno)
		return ;
	ft_putstr_fd(str, 2);
	if (errno == 2)
		ft_putstr_fd(": no such file or directory", 2);
	else if (errno == 20)
		ft_putstr_fd(": not a directory", 2);
	else if (errno == 13)
		ft_putstr_fd(": permission denied", 2);
	else
		ft_putstr_fd(": error", 2);
}
