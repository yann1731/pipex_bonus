/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_bonus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 13:00:41 by yst-laur          #+#    #+#             */
/*   Updated: 2022/05/27 13:00:47 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pipex_bonus.h"

void	run(char *cmdpath, char **cmd, t_data data)
{
	char	**env;

	env = NULL;
	execve(cmdpath, cmd, env);
	ft_putstr_fd("zsh: No such file or directory: ", STDERR_FILENO);
	ft_putstr_fd(cmd[0], STDERR_FILENO);
	ft_putstr_fd("\n", STDERR_FILENO);
	freeall(data);
	exit(1);
}
