/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_found_id_last_sep.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/07 14:15:14 by alhelson          #+#    #+#             */
/*   Updated: 2017/01/07 14:15:15 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_found_id_last_sep(char *str, int sep)
{
	int c;
	int last_id;

	c = 0;
	last_id = -1;
	if (!str)
		return (-1);
	while (str[c])
	{
		if (sep == str[c])
			last_id = c;
		c++;
	}
	return (last_id);
}
