/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_in_out_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 12:23:43 by yst-laur          #+#    #+#             */
/*   Updated: 2022/05/27 12:23:47 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pipex_bonus.h"

void	handle_in_out(char *argv[], t_data data)
{
	int	fd[2];
	int	i;

	i = -1;
	fd[0] = open(argv[1], O_RDONLY);
	if (fd[0] != -1)
	{
		dup2(fd[0], STDIN_FILENO);
		close(fd[0]);
	}
	if (fd[0] != -1)
		while (++i < data.argc - 4)
			rundir(data.cmdpath[i], data.cmd[i], data);
	if (fd[0] == -1)
		handle_no_infile(data, &i, fd);
	fd[1] = open(argv[data.argc - 1], O_WRONLY | O_TRUNC | O_CREAT, 0777);
	dup2(fd[1], STDOUT_FILENO);
	close(fd[1]);
	data.pid[++*data.i] = fork();
	if (data.pid[*data.i] == 0)
		run(data.cmdpath[i], data.cmd[i], data);
	procwait(data);
}
