/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   findpath_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 12:59:49 by yst-laur          #+#    #+#             */
/*   Updated: 2022/05/27 12:59:56 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pipex_bonus.h"

char	*findpath(char **environ)
{
	int		i;
	char	*ptr;

	i = -1;
	while (environ[++i])
	{
		ptr = ft_strnstr(environ[i], "PATH=", ft_strlen("PATH="));
		if (ptr != NULL)
			return (ptr + 5);
	}
	return (NULL);
}
