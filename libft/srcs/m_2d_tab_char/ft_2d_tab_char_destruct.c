/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_2d_tab_char_destruct.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 21:53:27 by alhelson          #+#    #+#             */
/*   Updated: 2016/11/23 21:55:19 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_2d_tab_char.h"
#include <stdlib.h>

void	ft_2d_tab_char_destruct(t_2d_tab_char **tab_2d)
{
	ft_2d_tab_char_del_tab(tab_2d);
	ft_2d_tab_char_del(tab_2d);
}
