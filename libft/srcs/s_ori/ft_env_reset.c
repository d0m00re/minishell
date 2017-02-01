/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_env_reset.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 15:47:56 by alhelson          #+#    #+#             */
/*   Updated: 2017/01/04 15:48:05 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_ori.h"

void			ft_env_reset(void)
{
	extern char **environ;

	ft_str2d_del(&environ);
	if (!(environ = malloc(sizeof(char *) * 1)))
		return ;
	environ[0] = 0;
}
