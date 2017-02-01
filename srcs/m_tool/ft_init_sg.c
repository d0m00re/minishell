/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_sg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 14:07:12 by alhelson          #+#    #+#             */
/*   Updated: 2017/01/04 14:07:17 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include "ft_tool.h"

void	ft_init_sg(void)
{
	signal(SIGQUIT, &ft_catch_sg);
	signal(SIGINT, &ft_catch_sg);
	signal(11, &ft_catch_sg);
}
