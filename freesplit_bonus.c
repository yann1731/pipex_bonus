/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   freesplit_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 13:02:02 by yst-laur          #+#    #+#             */
/*   Updated: 2022/05/27 13:02:30 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pipex_bonus.h"

void	freesplit(char **split)
{
	int	i;

	i = -1;
	while (split[++i])
		free(split[i]);
	free(split);
}
