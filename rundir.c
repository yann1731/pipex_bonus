#include "pipex_bonus.h"

void	rundir(char *cmdpath, char **cmd)
{
	int pid;
	int fd[2];

	checkoutput(pipe(fd));
	pid = fork();
	checkoutput(pid);
	if (pid > 0)
	{
		close(fd[1]);
		dup2(fd[0], STDIN_FILENO);
		close(fd[0]);
	}
	if (pid == 0)
	{
		close(fd[0]);
		dup2(fd[1], STDOUT_FILENO);
		close(fd[1]);
		run(cmdpath, cmd);
	}
}

