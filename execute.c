#include "pipex_bonus.h"

void	execute(char *argv[], t_data data)
{
	int	fd[2];
	int i;

	if (ft_strnstrint(HERE_DOC, "here_doc", ft_strlen(HERE_DOC)) == 1)
		handle_here_doc(argv, data);
	else
	{
		i = -1;
		fd[0] = open(argv[1], O_RDONLY);
		if (fd[0] != -1)
		{
			dup2(fd[0], STDIN_FILENO);
			close(fd[0]);
		}
		if (fd[0] != -1)
			while (++i < data.argc - 4)
				rundir(data.cmdpath[i], data.cmd[i]);
		if (fd[0] == -1)
			handle_no_infile(data, &i, fd);
		fd[1] = open(argv[data.argc - 1], O_WRONLY);
		dup2(fd[1], STDOUT_FILENO);
		close(fd[1]);
		run(data.cmdpath[i], data.cmd[i]);
	}
}