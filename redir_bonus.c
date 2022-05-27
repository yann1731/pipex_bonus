/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   redir_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 12:54:14 by yst-laur          #+#    #+#             */
/*   Updated: 2022/05/27 12:54:20 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pipex_bonus.h"

void	redir(int fd[], t_data data)
{
	checkoutput(pipe(fd), data);
	dup2(fd[0], STDIN_FILENO);
	close(fd[0]);
	close(fd[1]);
}
