/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main_parser.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 14:57:31 by alhelson          #+#    #+#             */
/*   Updated: 2017/01/04 14:57:33 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"

char	**ft_main_parser(char **line)
{
	char **new;

	new = ft_strsplit(*line, ' ');
	ft_strdel(line);
	return (new);
}
