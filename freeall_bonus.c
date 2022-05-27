/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   freeall_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 12:53:53 by yst-laur          #+#    #+#             */
/*   Updated: 2022/05/27 12:53:59 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pipex_bonus.h"

void	freeall(t_data data)
{
	freecmd(data.cmd);
	freesplit(data.cmdpath);
	free(data.pid);
}
