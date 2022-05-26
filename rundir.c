#include "pipex_bonus.h"

void	rundir(char *cmdpath, char **cmd, t_data data)
{
	int fd[2];

	checkoutput(pipe(fd));
	data.pid[++data.i] = fork();
	checkoutput(data.pid[data.i]);
	if (data.pid[data.i] > 0)
	{
		close(fd[1]);
		dup2(fd[0], STDIN_FILENO);
		close(fd[0]);
	}
	if (data.pid[data.i] == 0)
	{
		close(fd[0]);
		dup2(fd[1], STDOUT_FILENO);
		close(fd[1]);
		run(cmdpath, cmd, data);
	}
}

