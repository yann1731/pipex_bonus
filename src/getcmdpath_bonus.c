/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getcmdpath_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 12:55:26 by yst-laur          #+#    #+#             */
/*   Updated: 2022/05/27 12:55:34 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pipex_bonus.h"

char	**getcmdpath(char ***cmd, char **path, int argc)
{
	char	**cmdpath;
	int		count;
	int		i;

	count = argc - 3;
	cmdpath = malloc((count + 1) * sizeof(char *));
	if (cmdpath == NULL)
		error();
	i = 0;
	while (cmd[i])
	{
		cmdpath[i] = checkaccess(cmd[i][0], path);
		if (cmdpath[i] == NULL)
			cmdpath[i] = ft_strdup("");
		i++;
	}
	cmdpath[count] = NULL;
	return (cmdpath);
}
