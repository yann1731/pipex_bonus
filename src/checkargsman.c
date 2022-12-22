/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkargsman.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 12:27:15 by yst-laur          #+#    #+#             */
/*   Updated: 2022/05/27 12:27:24 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pipex.h"

void	checkargsman(int argc)
{
	if (argc != 5)
	{
		ft_putstr_fd("Enter 4 arguments\n", STDERR_FILENO);
		exit(1);
	}
}
