/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkargs_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 12:27:56 by yst-laur          #+#    #+#             */
/*   Updated: 2022/05/27 12:27:58 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pipex_bonus.h"

void	checkargs(int argc)
{
	if (argc < 5)
	{
		write(2, "Must give 4 or more arguments.\n",
			ft_strlen("Must give 4 or more arguments.\n"));
		exit(1);
	}
}
