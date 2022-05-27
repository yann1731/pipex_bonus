/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   executeman.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 13:01:01 by yst-laur          #+#    #+#             */
/*   Updated: 2022/05/27 13:01:08 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pipex.h"

void	executeman(char *argv[], t_data data)
{
	data.pid = malloc((data.argc - 3) * sizeof(int));
	handle_in_out(argv, data);
}
