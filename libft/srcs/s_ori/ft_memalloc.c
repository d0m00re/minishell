/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 18:03:14 by alhelson          #+#    #+#             */
/*   Updated: 2016/11/04 18:04:22 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "ft_ori.h"

void	*ft_memalloc(size_t size)
{
	void *mem;

	mem = malloc(size);
	if (!mem)
		return (0);
	ft_bzero(mem, size);
	return (mem);
}
