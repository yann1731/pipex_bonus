/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmdopthd_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 12:24:56 by yst-laur          #+#    #+#             */
/*   Updated: 2022/05/27 12:25:03 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pipex_bonus.h"

char	***cmdopthd(int argc, char *argv[])
{
	int		count;
	int		start;
	int		i;
	char	***cmd;

	count = argc - 4;
	start = 0;
	i = 3;
	cmd = malloc((count + 1) * sizeof(char **));
	if (cmd == NULL)
		error();
	while (count > 0)
	{
		cmd[start] = ft_split(argv[i], ' ');
		if (cmd[start] == NULL)
			cmd[start] = malloc(sizeof(char **));
		count--;
		i++;
		start++;
	}
	cmd[start] = NULL;
	return (cmd);
}
