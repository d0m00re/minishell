/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_launch_step.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 15:59:32 by alhelson          #+#    #+#             */
/*   Updated: 2017/01/06 15:59:33 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"
#include "ft_launch.h"
#include "ft_parser.h"

static int	ft_nb_command(char **line_command)
{
	int		c;
	int		nb;

	nb = 1;
	c = 0;
	if (!line_command || !(*line_command))
		return (0);
	while (line_command[c])
	{
		if (!ft_strcmp(line_command[c], ";"))
			nb++;
		c++;
	}
	return (nb);
}

int			ft_launch_step(char **line_command)
{
	int		nb_cmd;
	int		id;
	char	**tmp;

	id = 0;
	nb_cmd = ft_nb_command(line_command);
	while (nb_cmd)
	{
		tmp = ft_extract_every_part(line_command, &id);
		ft_launch_main(tmp);
		nb_cmd--;
		ft_str2d_del(&tmp);
	}
	return (1);
}
