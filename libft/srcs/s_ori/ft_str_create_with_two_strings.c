/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_create_with_two_strings.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/18 14:47:27 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/18 14:47:57 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"
#include <stdlib.h>

char		*ft_str_create_with_two_strings(char *s1, char *s2)
{
	char	*new;
	int		size_to;

	size_to = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!s1 || !s2 || !(new = malloc(sizeof(char) * (size_to))))
		return (0);
	ft_bzero(new, size_to);
	ft_strcpy(new, s1);
	ft_strcat(new, s2);
	return (new);
}
