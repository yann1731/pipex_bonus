/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkargshd_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 12:24:12 by yst-laur          #+#    #+#             */
/*   Updated: 2022/05/27 12:24:15 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pipex_bonus.h"

void	checkargshd(t_data data)
{
	if (data.argc != 6)
	{
		freeall(data);
		ft_putstr_fd("Here_doc requires 5 arguments", STDERR_FILENO);
		exit(1);
	}
}
