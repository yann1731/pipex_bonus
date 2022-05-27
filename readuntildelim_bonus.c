/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   readuntildelim_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 12:29:18 by yst-laur          #+#    #+#             */
/*   Updated: 2022/05/27 12:29:29 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pipex_bonus.h"

void	readuntildelim(char *delimiter, t_data data)
{
	char	*buf;
	int		fd[2];

	checkoutput(pipe(fd), data);
	dup2(fd[1], STDOUT_FILENO);
	close(fd[1]);
	while (1)
	{
		ft_putstr_fd("pipe heredoc> ", STDERR_FILENO);
		buf = gnl();
		if (ft_strncmp(buf, delimiter, ft_strlen(buf)) == 0)
			break ;
		write(STDOUT_FILENO, buf, ft_strlen(buf));
		free(buf);
	}
	free(buf);
	dup2(fd[0], STDIN_FILENO);
	close(fd[0]);
}
