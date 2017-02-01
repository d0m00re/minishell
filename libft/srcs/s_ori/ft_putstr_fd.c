/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 17:48:58 by alhelson          #+#    #+#             */
/*   Updated: 2016/11/04 17:49:05 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_ori.h"

void	ft_putstr_fd(char const *s, int fd)
{
	int size;

	if (!s || fd < 0)
		return ;
	size = ft_strlen(s);
	if (size < 1)
		return ;
	write(fd, s, size);
}
