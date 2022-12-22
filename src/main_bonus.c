/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 13:10:57 by yst-laur          #+#    #+#             */
/*   Updated: 2022/05/27 13:11:06 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "pipex_bonus.h"

int	main(int argc, char *argv[], char *env[])
{
	t_data	data;
	int		i;

	i = -1;
	checkargs(argc);
	data.argc = argc;
	data.path = get_path(env);
	data.argv = argv;
	data.i = &i;
	if (ft_strcmp(argv[1], "here_doc") != 0)
	{
		data.cmd = cmdopt(argc, argv);
		data.cmdpath = getcmdpath(data.cmd, data.path, data.argc);
	}
	else
	{
		checkargshd(data);
		data.cmd = cmdopthd(argc, argv);
		data.cmdpath = getcmdpathhd(data.cmd, data.path, argc);
	}
	freesplit(data.path);
	execute(argv, data);
	return (0);
}
