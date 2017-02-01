/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_builtin.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 17:39:18 by alhelson          #+#    #+#             */
/*   Updated: 2017/01/04 17:42:50 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BUILTIN_H
# define FT_BUILTIN_H

enum	e_builtin {ENV, CD, SETENV, UNSETENV, ECHO, EXIT};

int		ft_is_builtin(char *str);

int		ft_builtin_exit(void);

int		ft_builtin_setenv(char **line_command);

int		ft_builtin_unsetenv(char **to_delete);

int		ft_builtin_cd(char **argv);

int		ft_builtin_env(char **cmd);

int		ft_builtin_echo(char **argv);
#endif
