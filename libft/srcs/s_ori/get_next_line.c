/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/25 15:48:00 by alhelson          #+#    #+#             */
/*   Updated: 2016/11/27 04:53:58 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ori.h"
#include <stdlib.h>
#include <unistd.h>

static int		ft_is_spe_char(char *str, char c)
{
	if (!str)
		return (0);
	while (*str && *str != c)
		str++;
	if (*str == c)
		return (1);
	return (0);
}

static int		end_comportment(char **memo, char **line)
{
	if (*memo != 0 && **memo != 0)
	{
		*line = ft_strdup(*memo);
		if (!line)
			return (-1);
		free(*memo);
		*memo = 0;
		return (1);
	}
	else if (*memo == 0 || **memo == 0)
		return (0);
	*line = 0;
	return (-1);
}

static int		ope_if_n_found(char **memo, char ***line)
{
	if (*memo && ft_is_spe_char(*memo, '\n'))
	{
		**line = ft_str_return_extract_line_behind_sep(*memo, '\n');
		ft_str_cut_includ_behind_sep(*memo, '\n');
		return (1);
	}
	return (0);
}

static	void	update_for_next_ite(char **memo, char **buffer, int retour)
{
	if (retour > 0)
	{
		if (*memo)
			ft_str_resize_concat(memo, *buffer);
		else
			*memo = ft_strdup(*buffer);
	}
	if (buffer && *buffer)
	{
		free(*buffer);
		*buffer = 0;
	}
}

int				get_next_line(const int fd, char **line)
{
	static char *memo = 0;
	char		*buffer;
	int			retour;

	buffer = 0;
	retour = 1;
	if (fd < 0)
		return (-1);
	while (retour && retour != -1)
	{
		if (ope_if_n_found(&memo, &line) == 1)
			return (1);
		if (!(buffer = malloc(sizeof(line) * (BUFF_SIZE + 1))))
			return (-1);
		ft_bzero(buffer, BUFF_SIZE + 1);
		retour = read(fd, buffer, BUFF_SIZE);
		if (retour == -1)
			return (-1);
		update_for_next_ite(&memo, &buffer, retour);
	}
	return (end_comportment(&memo, line));
}
