/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_modif_after_end_sep.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/07 13:43:15 by alhelson          #+#    #+#             */
/*   Updated: 2017/01/07 18:31:40 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_str_modif_after_end_sep(char *str, char sep)
{
	int count;
	int last_id;

	if (!str)
		return ;
	count = 0;
	last_id = 0;
	while (str[count])
	{
		if (str[count] == sep)
			last_id = count;
		count++;
	}
	if (str[last_id] == sep)
		last_id++;
	while (str[last_id])
	{
		str[last_id] = 0;
		last_id++;
	}
}
