/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_launch.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/30 12:25:26 by alhelson          #+#    #+#             */
/*   Updated: 2017/01/04 17:43:22 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LAUNCH_H
# define FT_LAUNCH_H

char	*ft_found_path_for_bin(char *name, int *spe_error);

int		ft_launch_step(char **line_command);

int		ft_launch_exe_bin(char **line_command, int *error);

int		ft_launch_builtin(int num, char **cmd);

int		ft_launch_main(char **line_command);

#endif
