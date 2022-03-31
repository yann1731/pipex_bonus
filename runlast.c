#include "pipex_bonus.h"

void	runlast(char *argv[], int fd[], char *cmd, char **cmdpath)
{
	int		fd1;
	int		lastarg;
	char	**env;

	env = NULL;
	lastarg = 0;
	while (argv[lastarg])
		lastarg++;
	fd1 = open(argv[lastarg - 1], O_WRONLY);
	checkoutput(dup2(fd1, STDOUT_FILENO));
	checkoutput(dup2(fd[0], STDIN_FILENO));
	close(fd1);
	close(fd[1]);
	close(fd[0]);
	checkoutput(execve(cmdpath, cmd, env));
}