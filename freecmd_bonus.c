/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   freecmd_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 13:12:25 by yst-laur          #+#    #+#             */
/*   Updated: 2022/05/27 13:12:31 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pipex_bonus.h"

void	freecmd(char ***cmd)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (cmd[i])
	{
		while (cmd[i][j])
		{
			free(cmd[i][j]);
			j++;
		}
		free(cmd[i]);
		j = 0;
		i++;
	}
	free(cmd);
}
