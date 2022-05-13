#include "pipex_bonus.h"

void	run(char *cmdpath, char **cmd, t_data data)
{
	char **env;

	env = NULL;
	execve(cmdpath, cmd, env);
	perror("Error");
	freeall(data);
	exit(-1);
}

