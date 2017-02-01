/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_last.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 00:55:23 by alhelson          #+#    #+#             */
/*   Updated: 2016/11/09 00:56:38 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"

t_list	*ft_lstlast_last(t_list *begin_list)
{
	t_list *list;

	list = begin_list;
	if (!list && !(list->next))
		return (0);
	while (list->next->next)
		list = list->next;
	return (list);
}
