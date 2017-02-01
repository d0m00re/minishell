/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_resize_concat_two_params.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/15 21:39:57 by alhelson          #+#    #+#             */
/*   Updated: 2017/01/04 15:00:56 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"

void	ft_str_resize_concat_two_params(char **str, char *s1, char *s2)
{
	if (!s1 || !s2)
		return ;
	ft_str_resize_concat(str, s1);
	ft_str_resize_concat(str, s2);
}
