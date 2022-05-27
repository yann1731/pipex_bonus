/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_here_doc_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 13:02:43 by yst-laur          #+#    #+#             */
/*   Updated: 2022/05/27 13:02:53 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pipex_bonus.h"

void	handle_here_doc(char *argv[], t_data data)
{
	int		fd1;
	int		i;
	char	*delimiter;

	i = 0;
	checkargshd(data);
	delimiter = ft_strjoin(argv[2], "\n");
	readuntildelim(delimiter, data);
	free(delimiter);
	rundir(data.cmdpath[i], data.cmd[i], data);
	i++;
	fd1 = open(argv[data.argc - 1], O_WRONLY | O_APPEND | O_CREAT, 0777);
	dup2(fd1, STDOUT_FILENO);
	close(fd1);
	data.pid[++*data.i] = fork();
	if (data.pid[*data.i] == 0)
		run(data.cmdpath[i], data.cmd[i], data);
	procwaithd(data);
}
