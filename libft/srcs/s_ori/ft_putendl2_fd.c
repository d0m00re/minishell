/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl2_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/19 12:59:59 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/19 13:00:10 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"

void	ft_putendl2_fd(char const *s, char const *s2, int fd)
{
	if (!s || !s2 || fd < 0)
		return ;
	ft_putstr_fd(s, fd);
	ft_putstr_fd(s2, fd);
	ft_putchar_fd('\n', fd);
}
