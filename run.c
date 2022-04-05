#include "pipex_bonus.h"

void	run(char *cmdpath, char **cmd)
{
	char **env;

	env = NULL;
	checkoutput(execve(cmdpath, cmd, env));
}

