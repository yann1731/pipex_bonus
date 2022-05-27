/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_no_infile_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 12:25:22 by yst-laur          #+#    #+#             */
/*   Updated: 2022/05/27 12:25:31 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pipex_bonus.h"

void	handle_no_infile(t_data data, int *i, int fd[])
{
	ft_putstr_fd("zsh: no such file or directory: ", STDERR_FILENO);
	ft_putstr_fd(data.argv[1], STDERR_FILENO);
	ft_putstr_fd("\n", STDERR_FILENO);
	redir(fd, data);
	*i = 0;
	while (++*i < data.argc - 4)
		rundir(data.cmdpath[*i], data.cmd[*i], data);
}
