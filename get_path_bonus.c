/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_path_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 13:03:39 by yst-laur          #+#    #+#             */
/*   Updated: 2022/05/27 13:03:47 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pipex_bonus.h"

char	**get_path(char **env)
{
	char		*path_env;
	char		**paths;

	path_env = findpath(env);
	if (path_env == NULL)
	{
		perror("Error");
		exit(1);
	}
	paths = ft_split(path_env, ':');
	return (paths);
}
