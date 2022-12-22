/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkoutput_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 13:03:18 by yst-laur          #+#    #+#             */
/*   Updated: 2022/05/27 13:03:26 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pipex_bonus.h"

void	checkoutput(int output, t_data data)
{
	if (output == -1)
	{
		freeall(data);
		perror("error ");
		exit(1);
	}
}
