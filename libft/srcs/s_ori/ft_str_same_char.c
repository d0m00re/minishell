/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_same_char.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/17 22:50:08 by alhelson          #+#    #+#             */
/*   Updated: 2016/12/17 22:50:10 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_same_char(char *str, char c)
{
	int count;

	if (!str)
		return (0);
	count = 0;
	while (str[count] == c)
		count++;
	if (str[count])
		return (0);
	return (count);
}
