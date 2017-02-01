/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 04:32:09 by alhelson          #+#    #+#             */
/*   Updated: 2016/11/09 04:36:19 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	t_list *list;

	list = *alst;
	if (!list)
		*alst = new;
	else
	{
		*alst = new;
		(*alst)->next = list;
	}
}
