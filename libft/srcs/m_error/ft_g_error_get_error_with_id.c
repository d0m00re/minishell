/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_g_error_get_error_with_id.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 08:26:45 by alhelson          #+#    #+#             */
/*   Updated: 2016/11/22 08:26:48 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_gestion_error.h"

int	ft_g_error_get_error_with_id(t_error *error, int id)
{
	if (id < 0 || !error || !(ft_g_error_valid_id(error, id)))
		return (-1);
	return ((error[id]).error);
}
