/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_reverse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 18:56:38 by alhelson          #+#    #+#             */
/*   Updated: 2017/01/04 14:59:50 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_str_reverse(char *str)
{
	int		size;
	int		count;
	char	temp;

	size = ft_strlen(str) - 1;
	count = 0;
	while (size > count)
	{
		temp = str[count];
		str[count] = str[size];
		str[size] = temp;
		size--;
		count++;
	}
}
