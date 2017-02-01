/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 17:42:36 by alhelson          #+#    #+#             */
/*   Updated: 2016/11/04 17:42:37 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dst, const char *src)
{
	int count;

	count = 0;
	while (*src)
	{
		dst[count] = *src;
		src++;
		count++;
	}
	dst[count] = '\0';
	return (dst);
}
