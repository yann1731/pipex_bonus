/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkaccess_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 12:20:52 by yst-laur          #+#    #+#             */
/*   Updated: 2022/05/27 12:20:59 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pipex_bonus.h"

char	*checkaccess(char *cmd, char **path)
{
	int		i;
	char	*cmdpath;

	i = 0;
	while (path[i])
	{
		if (access(cmd, F_OK) == 0)
			return (ft_strdup(cmd));
		cmdpath = ft_strjoin(path[i], "/");
		cmdpath = ft_strjoinfree(cmdpath, cmd);
		if (access(cmdpath, F_OK) == 0)
			return (cmdpath);
		free(cmdpath);
		i++;
	}
	return (NULL);
}
