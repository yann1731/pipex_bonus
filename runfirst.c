#include "pipex_bonus.h"

void	runfirst(char *argv[], int fd[], char *cmd, char **cmdpath)
{
	int	fd1;
	char **env;

	env = NULL;
	fd1 = open(argv[1], O_RDONLY);
	checkoutput(fd1);
	checkoutput(dup2(fd1, STDIN_FILENO));
	checkoutput(dup2(fd[1], STDOUT_FILENO));
	close(fd[0]);
	close(fd[1]);
	checkoutput(execve(cmdpath, cmd, env));
}