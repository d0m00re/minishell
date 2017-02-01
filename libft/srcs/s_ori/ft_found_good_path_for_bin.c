/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_found_good_path_for_bin.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 15:45:16 by alhelson          #+#    #+#             */
/*   Updated: 2017/01/04 15:47:19 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_found_good_path_for_bin(char *name)
{
	int		c;
	char	*tmp;
	char	**dup;

	if (!name || !(tmp = ft_getenv("PATH")))
		return (0);
	if (!(dup = ft_strsplit(tmp + 5, ':')))
		return (0);
	c = 0;
	while (dup[c])
	{
		ft_str_resize_concat_two_params(&dup[c], "/", name);
		if (!access(dup[c], X_OK))
		{
			tmp = ft_strdup(dup[c]);
			ft_str2d_del(&dup);
			return (tmp);
		}
		c++;
	}
	ft_str2d_del(dup[c]);
	return (0);
}
