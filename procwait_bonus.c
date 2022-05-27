/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   procwait_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 12:28:29 by yst-laur          #+#    #+#             */
/*   Updated: 2022/05/27 12:28:37 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pipex_bonus.h"

void	procwait(t_data data)
{
	int	i;

	i = -1;
	while (++i < (data.argc - 3))
		waitpid(data.pid[i], NULL, 0);
	freeall(data);
}
