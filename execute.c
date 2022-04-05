#include "pipex_bonus.h"

void	execute(char *argv[], t_data data)
{
	int	fd[2];
	int i;

	i = -1;
	fd[0] = open(argv[1], O_RDONLY);
	dup2(fd[0], STDIN_FILENO);
	close(fd[0]);
	while (++i < data.argc - 4)
		rundir(data.cmdpath[i], data.cmd[i]);
	fd[1] = open(argv[data.argc - 1], O_WRONLY);
	dup2(fd[1], STDOUT_FILENO);
	close(fd[1]);
	run(data.cmdpath[i], data.cmd[i]);
}