/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rundir_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 13:09:54 by yst-laur          #+#    #+#             */
/*   Updated: 2022/05/27 13:10:46 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pipex_bonus.h"

void	rundir(char *cmdpath, char **cmd, t_data data)
{
	int	fd[2];

	checkoutput(pipe(fd), data);
	data.pid[++*data.i] = fork();
	checkoutput(data.pid[*data.i], data);
	if (data.pid[*data.i] > 0)
	{
		close(fd[1]);
		dup2(fd[0], STDIN_FILENO);
		close(fd[0]);
	}
	if (data.pid[*data.i] == 0)
	{
		close(fd[0]);
		dup2(fd[1], STDOUT_FILENO);
		close(fd[1]);
		run(cmdpath, cmd, data);
	}
}
