/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 17:41:53 by alhelson          #+#    #+#             */
/*   Updated: 2017/01/07 18:38:54 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PARSER_H
# define FT_PARSER_H

char	**ft_main_parser(char **line);

char	**ft_parser(char const *s);

int	ft_spe_sep(char c);

char	**ft_extract_every_part(char **cmd, int *begin);

#endif
