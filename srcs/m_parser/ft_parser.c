/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/06 15:52:57 by alhelson          #+#    #+#             */
/*   Updated: 2017/01/18 17:50:30 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_ori.h"
#include "ft_parser.h"

static void		ft_delete_spe_char(char *str)
{
	int			count;
	int			count2;

	count = 0;
	if (!str || !ft_char_is_present(str, 34))
		return ;
	while (str[count])
	{
		if (str[count] == 34)
		{
			count2 = count;
			while (str[count2])
			{
				str[count2] = str[count2 + 1];
				count2++;
			}
			count = 0;
		}
		else
			count++;
	}
}

static int		ft_nb_word(const char *str)
{
	int			nb_word;
	int			count;
	int			begin;

	nb_word = 0;
	count = 0;
	begin = 0;
	while (str && str[count])
	{
		if (begin == 0 && !ft_spe_sep(str[count]) && str[count] != ';')
		{
			nb_word++;
			begin = 1;
		}
		if (begin == 1 &&\
		(ft_spe_sep(str[count]) || str[count] == ';'))
			begin = 0;
		if (str[count] == ';')
			nb_word++;
		count++;
	}
	return (nb_word);
}

static char		*ft_extract_word(char const *s, int *cursor)
{
	int			size;
	int			count;
	char		*str;

	count = 0;
	size = 0;
	while (s[*cursor] && ft_spe_sep(s[*cursor]))
		(*cursor)++;
	while (s[*cursor + size] && !(size > 0 && s[*cursor] == ';') &&\
	!ft_spe_sep(s[*cursor + size]) && !(size > 0 && s[*cursor + size] == ';'))
		size++;
	if (!(str = malloc(sizeof(char) * (size + 1))))
		return (0);
	while (count < size)
	{
		str[count] = s[(*cursor) + count];
		count++;
	}
	(*cursor) += count;
	str[count] = '\0';
	return (str);
}

static void		ft_extract_all_word(int nb_word, int *count,\
			char **str, char const *s)
{
	int			real_count;
	int			cursor;

	cursor = 0;
	real_count = 0;
	while (real_count < nb_word)
	{
		str[(*count)] = (char *)ft_extract_word(s, &cursor);
		ft_delete_spe_char(str[(*count)]);
		if (ft_strcmp(str[(*count)], ";") == 0)
			ft_strdel(&(str[(*count)]));
		else
			(*count)++;
		real_count++;
	}
}

char			**ft_parser(char const *s)
{
	char		**str;
	int			nb_word;
	int			count;

	if (!s)
		return (0);
	count = 0;
	if ((nb_word = ft_nb_word(s)) <= 0)
		return (0);
	if (!(str = malloc(sizeof(char *) * (nb_word + 1))))
		return (0);
	ft_extract_all_word(nb_word, &count, str, s);
	if (!count)
	{
		free(str);
		return (0);
	}
	str[count] = 0;
	return (str);
}
