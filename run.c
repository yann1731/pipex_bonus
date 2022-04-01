#include "pipex_bonus.h"

void	run(int fd[], char *cmdpath, char **cmd)
{
	char **env;

	env = NULL;
	checkoutput(dup2(fd[0], STDIN_FILENO));
	checkoutput(dup2(fd[1], STDOUT_FILENO));
	close(fd[0]);
	close(fd[1]);
	checkoutput(execve(cmdpath, cmd, env));
}

