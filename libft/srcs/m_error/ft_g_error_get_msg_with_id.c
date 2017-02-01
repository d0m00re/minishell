/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_g_error_get_msg_with_id.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/22 08:25:42 by alhelson          #+#    #+#             */
/*   Updated: 2016/11/22 08:25:56 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_gestion_error.h"

char	*ft_g_error_get_msg_with_id(t_error *error, int id)
{
	if (id < 0 || !error || !(ft_g_error_valid_id(error, id)))
		return (0);
	return ((error[id]).msg);
}
