/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_builtin_cd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alhelson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/04 14:10:34 by alhelson          #+#    #+#             */
/*   Updated: 2017/01/07 18:34:22 by alhelson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "errno.h"
#include <unistd.h>
#include <stdlib.h>
#include "ft_ori.h"

static void		ft_modif_pwd_old_pwd(void)
{
	char		tab[200];
	char		*cp;

	ft_bzero(tab, 200);
	getwd(tab);
	cp = ft_getenv("PWD");
	if (!cp)
	{
		ft_setenv("PWD", tab, 1);
		ft_setenv("OLDPWD", tab, 1);
		return ;
	}
	if (!(cp = ft_strdup(cp + 4)))
		return ;
	ft_setenv("PWD", tab, 1);
	ft_setenv("OLDPWD", cp, 1);
	ft_strdel(&cp);
}

static void		ft_go_to_the_past(void)
{
	char		*pwd;
	char		*oldpwd;

	oldpwd = ft_getenv("OLDPWD");
	pwd = ft_getenv("PWD");
	if (!pwd || !oldpwd)
	{
		ft_putstr_fd("cd -: error unknown pwd/oldpwd\n", 2);
		return ;
	}
	if (!(oldpwd = ft_strdup(oldpwd + 7)))
		return ;
	if (!(pwd = ft_strdup(pwd + 4)))
		return ;
	chdir(oldpwd);
	ft_setenv("OLDPWD", oldpwd, 1);
	ft_setenv("PWD", pwd, 1);
	ft_strdel(&oldpwd);
	ft_strdel(&pwd);
}

void			ft_builtin_cd(char **argv)
{
	char		*tmp;
	int			argc;
	extern char **environ;

	errno = 0;
	if ((argc = ft_str2dlen(argv)) > 1)
		return (ft_putendl2_fd("cd: string not in pwd.\n", argv[1], 2));
	if (*argv && ft_strcmp(argv[0], "~") && ft_strcmp(argv[0], "-"))
		chdir(argv[0]);
	else if (*argv && !ft_strcmp(argv[0], "-"))
		ft_go_to_the_past();
	else
	{
		if (!(tmp = ft_str2d_extract_elem_with_str_begin(environ, "HOME=")))
			return (ft_putstr_fd("cd: $HOME doesn't exist.\n", 2));
		chdir(tmp + 5);
		ft_strdel(&tmp);
	}
	if (errno == 0)
		ft_modif_pwd_old_pwd();
	else
		ft_perror("cd");
}
