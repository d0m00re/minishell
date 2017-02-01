/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_is_present.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/07 13:18:57 by alhelson          #+#    #+#             */
/*   Updated: 2017/01/07 13:18:58 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_present(char *str, char c)
{
	int count;

	if (!str)
		return (0);
	count = 0;
	while (str[count])
	{
		if (str[count] == c)
			return (1);
		count++;
	}
	return (0);
}
